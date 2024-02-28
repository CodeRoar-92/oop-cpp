#include<iostream>
using namespace std;
class car{
private:
int race;
string name;
string model;
public:
void input(){
    cout<<"Entre the race:"<<endl;
    cin>>race;
    cout<<"Entre the name:"<<endl;
    cin>>name;
    cout<<"Entre the model:"<<endl;
    cin>>model;
}
void show(){
    cout<<"Race is: "<<race<<endl;
    cout<<"Name is: "<<name<<endl;
    cout<<"Model is: "<<model<<endl;
}
};
int main(){
    car car1,car2,car3,car4;
    car1.input();
    car1.show();
    car2.input();
    car2.show();
    car3.input();
    car3.show();
    car4.input();
    car4.show();
}