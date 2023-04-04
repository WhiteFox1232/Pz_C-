#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  int even=0, odd=0;
  int **matx = new int* [3];
  for (int line=0; line<3; line++){
    matx[line] = new int [3];
  }

  srand(time(NULL));
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      matx[i][j] = rand()%40-10;
    
      cout<< " " << matx[i][j] << "  ";
  }
    
    cout << endl;
}
  cout << endl;

  cout << "Елементи головної діагоналі: ";
  for(int i=0;i<3; i++){
    
    cout << matx[i][i] << " ";    
  }
  cout << endl;

  cout << "Елементи другорядної діагоналі: ";
  for(int i=0, j=2; i<3; i++, j--){
    
      cout << matx[i][j] << " ";
  }
  cout << endl;
  
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if (matx[i][j]%2==0){
        even++;
      }else{
        odd++;
      }
    }
  }
  
  cout << "Парні числа: " << even << endl;
  cout << "Непарні числ: " << odd << endl;
  
  for (int line=0; line<3; line++){
    delete [] matx [line];
    
    return 0;
  }
}