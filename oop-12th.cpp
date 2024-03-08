#include<iostream>
using namespace std;
class Calculator_1{
int a,b,ch,c;
public:
void calculator(){
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    cout<<"Enter choice for operation: ";
    cin>>ch;
    if(ch ==1){
        c =a+b;
        cout<<"Addition: "<<c;
    }
    if(ch ==2){
        c =a-b;
        cout<<"Subtraction: "<<c;
    }
    if(ch ==3){
        c =a/b;
        cout<<"Division: "<<c;
    }
    if(ch ==4){
        c =a*b;
        cout<<"Multiplication: "<<c;
    }
    if(ch ==5){
        c =a%b;
        cout<<"Modolus: "<<c;
    }
    if(ch>5){
        
        cout<<"Invalid Expresion: ";
    }
}
};
int main(){
Calculator_1 obj1;
obj1.calculator();
return 0;
}