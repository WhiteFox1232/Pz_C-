#include <iostream>
#include<ctime>

using namespace std;

int main() {
  
  int N=50, counter=-1; 
  int array[N];

  srand(time(NULL));
  
  for(int i=0;i<N;i++){
    array[i] = rand()%50;
  }
  
  cout << "Вивід:" << endl;
  
  for(int i=0 ; i<N ; i++){
    if(i==N-1){
      cout << array[i] << endl;
    }else{
      cout << array[i] << ", ";
    }
  }
  
  for(int i=0 ; i<N ; i++){
    if(array[i]==0){
      counter = i;
      break;
    }
  }
  
  if(counter==-1){
    cout << "Данний масив не має нульового елемента";
  }else{
    cout << "Позиція першого нульового елемента: " << counter+1;
  }
}