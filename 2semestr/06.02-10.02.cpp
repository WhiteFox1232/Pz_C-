#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int matx[7][7] = {};
  int even = 0, odd = 0;

  srand(time(NULL));
  
  for(int i=0; i<7; i++){
    for(int j=0; j<7; j++){
      *(*(matx + i) + j) = rand()%20+1;
    }
  }
  
  for(int i=0; i<7; i++){
    for(int j=0; j<7; j++){
      cout.width(6);
      cout << matx[i][j];
      if (j==6){
        cout << endl;
      }
    }
  }
  
  cout << endl;
  
  cout << "Головна діагональ: ";
  for(int i=0; i<7; i++){
    cout << *(*(matx + i) + i) << ", ";
  }

  cout << endl;
  
  cout << "Другорядна діагональ: ";
  for(int i=6, j=0; i>=0; i--){
    cout << *(*(matx + i) + j) << ", ";
    j++;
  }

  cout << endl;

  cout << "Парні числа: ";
  for(int i=0; i<7; i++){
    for(int j=0; j<7; j++){
      if(*(*(matx + i) + j) % 2 == 0){
        even++;
      }
    }
  }
  
  cout << even << endl;  
  cout << "Непарні числа: ";
  
  for(int i=0; i<7; i++){
    for(int j=0; j<7; j++){
      if(*(*(matx + i) + j) % 2 == 1){
        odd++;
      }
    }
  }
  
  cout << odd << endl;
}