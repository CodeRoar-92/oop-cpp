#include<iostream>
using namespace std;
class cosmetics{
private:
int pg;
float pr;
char name[45];
public:
void input(){
    cout<<"Name:";
    cin >> name;
    cout<<"Pages: ";
    cin>>pg;
    cout<<"Prices:";
    cin>>pr;
}
 void show(){
    cout<<"Name: "<<name<<endl;
    cout<<"Pages: "<<pg<<endl;
    cout<<"Price: "<<pr<<endl;
 }
};
int main(){
    cosmetics cos1;
    cos1.input();
    cos1.show();
    cosmetics cos2(cos1);
    cosmetics cos3(cos1);
    cosmetics cos4(cos1);
    cosmetics cos5(cos1);
    cosmetics cos6(cos1);
    cout<<"For Cosmetisc2"<<endl;
    cos2.show();
    cout<<"For Cosmetisc3"<<endl;
    cos3.show();
    cout<<"For Cosmetisc4"<<endl;
    cos4.show();
    cout<<"For Cosmetisc5"<<endl;
    cos5.show();
    cout<<"For Cosmetisc6"<<endl;
    cos6.show();
}