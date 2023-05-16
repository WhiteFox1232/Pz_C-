#include <iostream>
#include <string>
using namespace std;
class Person{
public:
  string name;
  int age;
  string height;
};

void print(Person* person){
  
cout << person->name << " is " << person->age << " years old " << "and his height " << person->height <<'\n';
  
}

int main(){
Person person1;
person1.name = "Harry";
person1.age = 23;
person1.height = "178";
  
cout << "Meet " << person1.name << '\n';
  
print(&person1);
  
Person person2;
person2.name = "Adam";
person2.age = 12;
person2.height = "198";
  
cout << "Meet " << person2.name << '\n';
  
print(&person2);

Person person3;
person3.name = "Fedir";
person3.age = 43;
person3.height = "169";
  
cout << "Meet " << person3.name << '\n';
  
print(&person3);
  
return 0;
  
}