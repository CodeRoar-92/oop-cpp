#include<iostream>
using namespace std;
class Test{
private:
int n;
public:
void input(){
    cout<<"Enter the number: ";
    cin>>n;
}
void output(){
    cout<<"The value of Number is: "<<n;
}
};
int main(){
Test obj1;
obj1.input();
obj1.output();
return 0;
}


#include<iostream>
using namespace std;
class Marks{
private:
int a,b,c;
public:
void input(){
    cout<<"Enter the marks: "<<endl;
    cin>>a>>b>>c;
}
int sum(){
    return a+b+c;
}
float ave(){
    return (a+b+c)/3.0;
}
};
int main(){
Marks obj1;
int s,a;
obj1.input();
s=obj1.sum();
a=obj1.ave();
cout<<"Sum = "<<s<<endl;
cout<<"Ave = "<<a;
return 0;
}

#include<iostream>
using namespace std;
class Student{
public:
int age,roll_number;
string name;
string grade;
};
int main(){
    Student S1;
    S1.name ="Abdullah: ";
    S1.age = 21;
    S1.roll_number = 424543;
    S1.grade ='A';
    cout << S1.age <<"  " << S1.name <<"  " << S1.roll_number <<"  " << S1.grade<<endl;
return 0;
}

#include<iostream>
using namespace std;
class student{
int age;
string name;
string grade;
int roll_number;
public:
void setname(string s){
    if(s.size() == 0){
        cout<<"Invalid";
    }
}
void setage(int a){
    if(age<0 || age>100){
        cout<<"Invalid age: ";
        return ;
    }
}
void setgrade(string g){
    grade =g;
}
void setroll_number(int r){
    roll_number =r;
}
void getname(){
    cout<<name<<endl;
}
void getage(){
    cout<<age<<endl;
}
void getgrade(){
    cout<<grade<<endl;
}
void getroll_number(){
    cout<<roll_number<<endl;
}
};
int main(){
student s1;
s1.setage(21);
s1.setname("");
s1.setroll_number(212);
s1.setgrade("A+");
s1.getage();
s1.getgrade();
s1.getname();
s1.getroll_number();
return 0;
}



#include<iostream>
using namespace std;
class Students1{
    private:
    int age,roll;
    string name;
    string grade;
    public:
    void setage(int a){
        if(age < 0 || age > 100 ){
            cout<<"Invalid Age: ";
return ;
        }
    }
    void setroll(int r){
       roll=r; 
    }
    void setname(string n){
        if(n.size() ==0)
        {
            cout<<"Invalid name: Please Enter Valid name:";
            return;
        }
name =n;
    }
    void setgrade(string g){
        grade =g;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getroll(){
        cout<<roll<<endl;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }
};
int main(){
Students1 s1;
s1.setage(10);
s1.setgrade("A+");
s1.setname("Abdullah");
s1.setroll(212);
s1.getage();
s1.getgrade();
s1.getname();
s1.getroll();
return 0;
}

