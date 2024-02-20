#include<iostream>
using namespace std;
class marks{
private:
int a,b,c;
public:
void show(){
    cout<<"Enter the three numbers: "<<endl;
    cin>>a>>b>>c;
}

int sum()
{
    return a+b+c;
}
float ave()
{
    return (a+b+c)/3;
}
};
int main(){
    marks obj1,obj2;
    obj1.show();
    int s;
    float a;
    s=obj1.sum();
    a=obj1.ave();
    cout<<"Sum is = "<<s<<endl;
    cout<<"Ave = "<<a<<endl;
    obj2.show();
       s=obj2.sum();
    a=obj2.ave();
}