#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main() {

    int i=0, j=0;
  int m=3, n=3, diagonalsum=0;
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
  
  while(i<m && j<n){
    diagonalsum+=Massive[i][j];
    i++;
    j++;
  }
  
  i=m-1, j=0;
  
  while(i>=0 && j<n){
  diagonalsum+=Massive[i][j];
    i--;
    j++;
  }
  
    cout << "Cума діагоналей = " << diagonalsum << endl;
  
}