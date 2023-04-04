#include <iostream>
#include <ctime>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
};

bool isLeap(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int monthLength(int year, int month) {
    int monthLengths[] = {31, isLeap(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return monthLengths[month-1];
}

int daysFromDate(Date date) {
    int days = 0;
    for (int y = 1; y < date.year; y++) {
        days += isLeap(y) ? 366 : 365;
    }
    for (int m = 1; m < date.month; m++) {
        days += monthLength(date.year, m);
    }
    days += date.day - 1;
    return days;
}

Date today(void) {
    time_t t = time(NULL);
    tm tl = *localtime(&t);
    Date date = {tl.tm_year+1900, tl.tm_mon+1, tl.tm_mday};
    return date;
}

int main(void) {
    Date birthdate = {2002, 11, 9};
    Date today_date = today();
    int days = daysFromDate(birthdate);
    int days_today = daysFromDate(today_date);
    cout << "Days since birth: " << days_today - days << endl;
    return 0;
}