#include <iostream>

using namespace std;

int main(void) {
  
  int n;
  
  cout << "Enter the number: ";
  TryAgain:
  cin >> n;
  
  if (n==0 || n>99){
   cout << " Eter a positive number that is not greater than 100: ";
   goto TryAgain;
  }
  
  cout << '+';
  
  for(int i = 0; i < n - 2; i++){
  cout << '-';
  }
  
  cout << '+' << endl;
  
  for(int i = 0; i < n - 2;   i++) {
    cout << '|';
    
    for(int j = 0; j < n - 2; j++){
      cout << ' ';
    }
    
    cout << '|' << endl;
  }
  
  cout << '+';
  
  for(int i = 0; i < n - 2; i++){
    cout << '-';
  }
  
  cout << '+' << endl;
  
return 0;
  
}