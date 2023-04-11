#include <iostream>
#include <string>

using namespace std;
int main() {
    string password;
    getline(cin, password);

    if (password.length() < 8) {
        cout << "The password must be 8 characters long" << endl;
        return 0;
    }

    bool has_uppercase = false,has_lowercase = false,has_digit = false,has_specialchar = false ;

    for (char c : password) {
        if (isupper(c)) {
            has_uppercase = true;
        }else if (islower(c)) {
            has_lowercase = true;
        }else if (isdigit(c)) {
            has_digit = true;
        }else if (!isalnum(c)) {
            has_specialchar = true;
        }
    }

    if (has_uppercase && has_lowercase && has_digit && has_specialchar) {
        cout << "The password is valid" << endl;
    }else{
        if (!has_uppercase) {
            cout << "The password must have at least one upper case letter" << endl;
        }
        if (!has_lowercase) {
            cout << "The password must have at least one lower case letter" << endl;
        }
        if (!has_digit) {
            cout << "The password must have at least one digit" << endl;
        }
        if (!has_specialchar) {
            cout << "The password must have at least one special character" << endl;
        }
    }

    return 0;
}