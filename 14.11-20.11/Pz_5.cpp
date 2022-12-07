#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
  
  int m=3, n=4, maxnumber=0, number;
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
      if(Massive[i][j]>maxnumber){
        maxnumber = Massive[i][j];
        number = i*n+j+1;
      }
    }
  }
  
    cout << "Максимальний елемент = " << maxnumber << "\n" "Його номер: "<< number << endl;
  
}