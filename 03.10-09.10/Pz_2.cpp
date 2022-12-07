#include <iostream>
#include <math.h>

using namespace std;

int main() {

int x;
long result = 1;

  cout << "Enter number 1-15" << endl;
  cin >> x;

  for (int i = 1; i <= x; i++) {
    result= result*i;
    }
    cout << result ;
}