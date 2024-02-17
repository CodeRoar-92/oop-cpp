
#include<iostream>
using namespace std;
class myclass{
public:
int age;
string mystring;
int num;

};
int main(){
  myclass obj1;
  obj1.age=21;
  obj1.mystring = "Abdullah";  
  obj1.num=92;
cout<<obj1.age<<"\n";
cout<<obj1.mystring<<"\n";
cout<<obj1.num<<"\n";
}