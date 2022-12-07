#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
  
  int m=5, n=7;
  int line[m];
  int Massive[m][n];

  srand(time(NULL));
  
  for(int i=0; i<m; i++){
    line[i] = 0;
  }
  
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
  
  for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
        line[i]+=Massive[i][j];
    }
  }
  
  for(int i=0 ; i<m ; i++){
    cout << "\n" << i+1 << " сума рядка = " << line[i] << endl;
  }
}