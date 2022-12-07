#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
float x,y;
   cin >> x;
   cin >> y;

  if(x*y/2 <=2 && y>=0 && x>=0){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}