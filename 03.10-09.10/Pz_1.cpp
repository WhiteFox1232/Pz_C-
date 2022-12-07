#include <iostream>
#include <math.h>

using namespace std;

int main() {

int x;

  for (int i = 0; i < 5; i++) {

    cout <<"\n" "Enter x!" << endl ;

    cin >> x;
    
    cout << pow(sin(x), 5) + abs(5 * x - 1.5) << "\n";

  }
}