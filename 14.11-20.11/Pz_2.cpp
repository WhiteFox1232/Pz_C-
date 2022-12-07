#include <iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main() {
  int m=6, n=4;
  int column[n];
  int Massive[m][n];

  srand(time(NULL));
  
  for(int i=0;i<n;i++){
    column[i] = 0;
  }
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      Massive[i][j]= rand()%10;
    }
  }
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(j==n-1){
        cout << Massive[i][j] << endl;
      }else{
        cout << Massive[i][j] << ", ";
      }
    }
  }
  
  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(Massive[i][j]%2==0){
        column[j]++;
      }
    }
  }
  
  for(int j=0;j<n;j++){

    cout <<"\n" "У " << j+1 << "-му стовпчику парних елементів = " << column[j] << endl;

  }
}