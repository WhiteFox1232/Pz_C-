#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;

class Fraction{
  public:
    Fraction(int numerator, int denominator);
    string toString();
    double toDouble(), Dou;
void set(int, int);

  private:
    int numerator;
    int denominator;    
    string Str;
};

Fraction::Fraction(int numerator, int denominator){
  set(numerator, denominator);
}
string Fraction::toString(){
  Fraction::toDouble();
  int i = 0;
  
  if(this -> denominator < 0){
    this -> denominator *= (-1);
    this -> numerator *= (-1);
  }
  
  if(this -> numerator % this -> denominator == 0){
    this -> Str = to_string(this -> numerator / this -> denominator);
    return Str;
  }
  
  if(abs(this -> numerator) > this -> denominator){
    for(i = 0; abs(this -> numerator) > this -> denominator; i++){
      if(this -> numerator > 0){
        this -> numerator -= denominator;
      }else if(this -> numerator < 0){
        this -> numerator += denominator;
      }
    }
  }
  
    if(this -> numerator < 0){
      i *= (-1);
    }
  
  if(i == 0){
    this -> Str = to_string(this -> numerator) + "/" + to_string(this -> denominator);
  }else if(this -> numerator <0){
    this -> numerator = abs(this -> numerator);
  this -> Str = to_string(i) + " " + to_string(this -> numerator) + "/" + to_string(this -> denominator);
  }else{
  this -> Str = to_string(i) + " " + to_string(this -> numerator) + "/" + to_string(this -> denominator);
  }
  
  return Str;
  
}

void Fraction::set(int numerator, int denominator){
  this -> numerator = numerator;
  this -> denominator = denominator;
  
}

double Fraction::toDouble(){
  setprecision(2);
  this -> Dou = (double) this -> numerator / (double) this -> denominator;
  return this -> Dou;
  
}

int main(void) {
  int num, den, Itemp, i, j;
  string Stemp;
  double Dtemp;
  string input = "";
  Fraction fraction(num, den);
  
  while (true) {
    cout << "Ввід: ";
    getline(cin, input);
    for (i = input.length() - 1, j = 0, num = 0, den = 0; input[i] != '/'; i--, j++) {
      Stemp = input[i];
      if(Stemp != "-"){
        num = stoi(Stemp);
        den += num * pow(10, j);
      }else{
        den *= (-1);
      }
    }
    
    for (i--, j = 0, num = 0; i >= 0; i--, j++) {
      Stemp = input[i];
      if(Stemp != "-"){
        Itemp = stoi(Stemp);
        num += Itemp * pow(10, j);
      }else{
        den *= (-1);
      }
    }
    fraction.set(num, den);
   Dtemp = fraction.toDouble();
    
    cout << fraction.toString() << " is " << Dtemp << " В десятковому вигляді" << endl;
  }  
  return 0;
}