#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
  
  int A, bigger=0, n=20;
  int Massive[n];
  
  cout << "Вхідне число: ";
  cin >> A;

  srand(time(NULL));
  
  for(int i=0;i<n;i++){
    Massive[i] = rand()%50;
  }
  
  cout << "Вивід:" << endl;
  
  for(int i=0;i<n;i++){
    if(i==n-1){
      cout << Massive[i] << endl;
    }else{
      cout << Massive[i] << ", ";
    }
  }
  
  for(int i=0;i<n;i++){
    if(Massive[i]>A){
      bigger++;
    }
  }
  
  cout << "Кількість елементів більших за " << A << " = " << bigger;
  
}
