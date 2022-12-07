#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
  
  int N=12;
  int temp;
  int Down[N];
  int Up[N];
  
  srand(time(NULL));
  
  cout << "Вхідний масив:"<<endl;
  
  for(int i=0; i<N; i++){
    Down[i] = rand()%10;
    if (i==N-1){
      cout << Down[i]<< endl; 
    }else{
      cout << Down[i]<< ", ";    
    }
  }
  
  for(int i=0; i<N; i++){
    Up[i] =Down[i];
  }
  
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(Up[j]>Up[j+1]){
        temp=Up[j];
        Up[j]=Up[j+1];
        Up[j+1]=temp;
      }
    }
  }
  
  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(Down[j]<Down[j+1]){
        temp=Down[j+1];
        Down[j+1]=Down[j];
        Down[j]=temp;
      }
    }
  }
  
  cout << "Зростаючий масив:"<<endl;
  
  for(int i=0; i<N; i++){
    if (i==11){
      cout << Up[i]<< endl;
      break;
    }else{
      cout << Up[i]<< ", ";    
    }
  }
  
  cout << "Спадний масив:"<<endl;
  
  for(int i=0; i<N; i++){
    if (i==11){
      cout << Down[i]<< endl;
      break;
    }else{
      cout << Down[i]<< ", ";    
    }
  }
}