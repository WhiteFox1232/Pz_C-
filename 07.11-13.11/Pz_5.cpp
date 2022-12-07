#include <iostream>

using namespace std;

int main() {
  
  int N=10, secondmax;
  int array[] = {3, 6, 0, 1, 2, 5, 7, 9, 2, 5};

  cout << "Вихідний масив: ";
  
  for(int i=0; i<N ; i++){
    if(i==N-1){
      cout << array[i] << endl;
    }else{
      cout << array[i] << ", ";
    }
  }
  
  int max = array[0];
  
  for(int i=0 ; i<N ; i++){
    if(array[i]>max){
      secondmax=max;
      max=array[i];
    }
  }
  
  cout << "Друге найбільше число: " << secondmax;
  
}