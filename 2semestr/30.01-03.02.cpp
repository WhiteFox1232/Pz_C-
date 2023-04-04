#include <iostream>

using namespace std;
int main() {
  int matx[] = {1, 9, 7, 30, -12, 14, 3, 6, -25};
  int n,max;
  n = sizeof(matx)/sizeof(matx[0]);
  max = *matx;
   
  for (int i = 0; i < n; i++ ){
    if(*(matx + i) > max){
      max = *(matx + i);
    }
  }
  cout << max;
}