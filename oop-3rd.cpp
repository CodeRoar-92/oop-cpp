#include<iostream>
using namespace std;
class myclass {
public:
string name;
string model;
int year;
};
int main(){
    myclass obj1;
    obj1.name = "BMW";
    obj1.model = "X";
    obj1.year =2002;
    cout<<obj1.name<<" "<<obj1.model<<"  "<<obj1.year<<endl;
    myclass obj2;
    obj2.name = "Sonata";
    obj2.model = "Y";
    obj2.year = 2023;
    cout<<obj2.name<<" "<<obj2.model<<"  "<<obj2.year<<endl;
}