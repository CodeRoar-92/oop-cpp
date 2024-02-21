#include<iostream>
using namespace std;
class Number{
    private:
    int x,y;
public:
Number(){
    x=y=100;
}
void show(){
    cout<<"x = "<<x<<endl;
    cout<<" y= "<<y<<endl;
    cout<<"Aerage = "<<(x+y)/2;
}
};
int main(){
    Number obj1;
    obj1.show();
}