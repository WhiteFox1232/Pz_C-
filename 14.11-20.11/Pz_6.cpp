#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
  
  int m=4, n=7, minnomber=100, number;
  int Massive[m][n];

  srand(time(NULL));
  
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      Massive[i][j]= rand()%10;
    }
  }
  
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(j==n-1){
        cout << Massive[i][j] << endl;
      }else{
        cout << Massive[i][j] << ", ";
      }
    }
  }
  
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      if(Massive[i][j]<minnomber){
        minnomber = Massive[i][j];
        number = i*n+j+1;
      }
    }
  }
  
    cout << "Mінімальний елемент = " << minnomber << " Його номер: "<< number << endl;
  
}