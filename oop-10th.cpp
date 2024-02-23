#include<iostream>
using namespace std;
class Traval{
private:
int km,hr;
public:
Traval(){
    km=hr=0;
}
void get(){
    cout<<"Enter the Kilometers:";
    cin>>km;
    cout<<"Enter the hours: ";
    cin>>hr;
}
void show(){
    cout<<"You Travelled "<<km<<" In "<<hr<<" hours:"<<endl;
}
void add(Traval p){
    Traval t;
    t.km =km +p.km;
    t.hr =hr+p.hr;
    cout<<"Total travelling is "<<t.km<<" Kilometers in "<<t.hr<<" hours ";
}
};
int main(){
    Traval my,your;
    my.get();
    my.show();
    your.get();
    your.show();
    my.add(your);
}

