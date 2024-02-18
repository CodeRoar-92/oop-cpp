#include<iostream>
using namespace std;
class Myclass{
    private:
    int n;
    public:
    void input(){
        cout<<"Enter the Number:\n";
        cin>>n;
    }
    void show(){
        cout<<"You Enter the number: "<<n;
    }
};
int main(){
    Myclass obj1;
    obj1.input();
    obj1.show();
}