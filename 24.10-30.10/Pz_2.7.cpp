#include <iostream>

using namespace std;
int main(void) {
  
  double pi4 = 0.0;
  long n;
  long j = 1;
  
  cout <<  " Please enter number of iterations ";
  cin >> n;
  
  for(int i= 0; i< n; i= i + 2){
    pi4= pi4 + ((1.0 / j) - (1.0 / (j + 2)));
    j= j + 4;
  }
  
  cout.precision(20);
  cout<< "Pi = "<< (pi4 * 4.)<< endl;
  
  return 0;
}