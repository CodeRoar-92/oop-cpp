#include<iostream>
using namespace std;
class main1{
private:
int pg;
float pr;
char title[45];
public:
void get(){
    cout<<"Enter the title: ";
    cin>>title;
    cout<<endl;
    cout<<"Enter the pages: ";
    cin>>pg;
    cout<<endl;
    cout<<"Enter the price: ";
    cin>>pr;
    cout<<endl;
}
void show(){
    cout<<"Title:"<<title<<endl;
    cout<<"Pages:"<<pg<<endl;
    cout<<"Price:"<<pr<<endl;
}
};
int main(){

main1 b1;
b1.get();
main1 b2(b1);
main1 b3(b1);
main1 b4(b1);
main1 b5(b1);
cout<<"Detail of book2: \n";
b2.show();
cout<<"Detail of book3:\n";
b3.show();
cout<<"Detail of book4:\n";
b4.show();
cout<<"Detail of book5:\n";
b5.show();
}
