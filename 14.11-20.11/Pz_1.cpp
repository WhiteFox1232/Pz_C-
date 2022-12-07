#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main() {
  
  int m=4, n=3;
  int line[m];
  int Massive[m][n];

  srand(time(NULL));
  
  for(int i=0 ; i<m ; i++){
    line[i] = 0;
  }
  
  for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
      Massive[i][j]= rand()%10;
    }
  }
  
  for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n ; j++){
      if(j==n-1){
        cout << Massive[i][j] << endl;
      }else{
        cout << Massive[i][j] << ", ";
      }
    }
  }
  
  for(int i=0 ; i<m ; i++){
    for(int j=0 ; j<n; j++){
      if(Massive[i][j]%2==0){
        line[i]++;
      }
    }
  }
  
  for(int i=0 ; i<m ; i++){
    cout <<"\n" "У " << i+1 << "-му рядку парних елементів = " << line[i] << endl;
  }
}