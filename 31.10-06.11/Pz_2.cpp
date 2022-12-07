#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  
  int N=10;
  int zero=0;
  int Massive[N];
  
  srand(time(NULL));
  
  cout << "Вхідний масив:"<<endl;
  
  for(int i=0; i<N; i++){
    Massive[i] = rand()%20-10;
    if (i==N-1){
      cout << Massive[i]<< endl; 
    }else{
      cout << Massive[i]<< ", ";    
    }
  }
  
  for(int i=0; i<N; i++){
    if(Massive[i]>zero){
      zero = Massive[i];
    }
  }
  
  for(int i=0; i<N; i++){
    if(Massive[i]==zero){
      zero = i;
    }
  }
  
  for(int i=0; i<zero; i++){
    if(Massive[i]<0){
      Massive[i]=0;
      }
  }
  
  cout << "Вихідний масив:"<<endl;
  
  for(int i=0; i<N; i++){
    if (i==N-1){
      cout << Massive[i]<< endl; 
    }else{
      cout << Massive[i]<< ", ";    
    }
  }
}