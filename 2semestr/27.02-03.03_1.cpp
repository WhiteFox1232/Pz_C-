#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  
  float *matx = new float [19];
  int positive = 0, negative = 0, zero = 0;
  
  srand(time(NULL));
  
  for (int i=0; i<19; i++){
    matx[i] = 0.1*(rand()%40-20);    
    if(matx[i]>0){
      positive++;
    }else if(matx[i]<0){
      negative++;
    }else{
      zero++;
    }
    cout << matx[i] << ", " << endl;   
  }
  cout << "Позитивні: " << positive << endl; 
  cout << "Негативні: " << negative << endl;
  cout << "Нулі: " << zero;

  delete [] matx;

  return 0;
}