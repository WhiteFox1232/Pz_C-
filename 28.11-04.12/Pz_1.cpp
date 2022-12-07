#include <iostream>

struct Date{

  int hours;
  int minutes;
};

using namespace std;

int main(){
  
  Date time;
  int addmin;

  Again:
  cout << "Введіть години до 24: ";
  cin >> time.hours;
  
  cout << "Введіть хвилини до 60: ";
  cin >> time.minutes;
  
  cout << "Введіть час у хвилинах який потрібно додати: ";
  cin >> addmin;

  if(time.hours>=24 || time.minutes>60){
    cout << "Будь ласка введіть коректну дату\n";
    goto Again;
  }
  
    time.minutes += time.hours*60+addmin;
    time.hours = time.minutes/60;
    time.minutes -= time.hours*60;

  while(time.hours>=24){
    time.hours-=24;
  }
  

  if(time.hours<10 && time.minutes>10){
    cout << "0" << time.hours << ":" << time.minutes;
  }else if(time.hours>10 && time.minutes<10){
    cout << time.hours << ":" << "0" << time.minutes;
  }else if(time.hours<10 && time.minutes<10){
  cout << "0" << time.hours << ":" << "0" << time.minutes;
  }else{
    cout << time.hours << ":" << time.minutes;
  }
  
  cout << "\n" <<endl;
  goto Again;
  
}