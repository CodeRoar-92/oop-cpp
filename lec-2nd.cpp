#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account_number;
    int balance_number; // if we not make any constructor then compiler make default constructor.
public:
    Customer()
    {
        // No return htype,automatically called when object is created,same as name class, used to intialize data members;
        // Now we intialize some values;
        name = "CodeRoar-92";
        account_number = 123344;
        balance_number = 1000;
    }
    void display()
    {
        cout << name << " " << account_number << "  " << balance_number << "  ";
    }
};

int main()
{
    Customer A1,A2;
    A1.display();
    A2.display();
    return 0;
}

#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account_number;
    int balance_number;

public:
    Customer()
    {

        // Now we intialize some values;
        name = "CodeRoar-92";
        account_number = 123344;
        balance_number = 1000;
    }

    // Now created the parameterized constructor:
    Customer(string a, int b, int c){
          name = a;
          account_number =b;
          balance_number =c;
    }
    void show(){
        cout<<name<<" "<<account_number<<" "<<balance_number<<endl;
    }
};

int main()
{
    Customer A2("Rajab",123,1000);
    A2.show();
    return 0;
}

#include<iostream>
using namespace std;
 class Student{
    private:
    int marks;
    string grade;
    public:
    Student(int m, string g){
        marks=m;
        grade =g;
    }
    void show(){
        cout<<"Marks = "<<marks<<endl;
        cout<<"Grade = "<<grade<<endl;
    }
 };
 int main(){
Student s1(1082, "A+"),s2(1000, "A");
cout<<"Record of Student 1"<<endl;
s1.show();
cout<<"Record of Student 2"<<endl;
s2.show();
return 0;
}



#include <iostream>
using namespace std;
class Customer
{
    string name;
    int account_number;
    int balance;

public:
    Customer(string a, int b, int c)
    {
        name = a;
        account_number = b;
        balance = c;
    }
    void show(){
        cout<<"Name: "<<name<<"\n"<<"Account_Number: "<<account_number<<"\n"<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    Customer A1("Abdullah",123, 1000);
A1.show();
    return 0;
}


 //====================  >>>>>Constructor Overloading<<<<<<<<< ================

#include<iostream>
using namespace std;
class myClass{
    private:
    string name;
    int account_Number;
    int balance;
    public:
   //Default Constructor
    myClass(){
        name = "CodeRoar-92";
        balance = 1234;
        account_Number = 1000;
    }
    // Now we are making parametirezed constructor
    myClass(string a,int b,int c){
        name =a;
        balance =b;
        account_Number =c;

    }

    myClass(string a, int b ){
        name=a;
        account_Number =b;
    }
    void show(){
        cout<<name<<"  "<<balance<<"  "<<account_Number<<"  "<<endl;
    }
};
int main(){
myClass A1,A2("Muhammad Ali", 12334,345),A3("Ahmad",123455);
A1.show();
A2.show();
A3.show();
return 0;
}


//====== >>>> use of this pointer
#include<iostream>
using namespace std;
class myClass{
    private:
    string name;
    int account_Number;
    int balance;
    public:
   //Default Constructor
    myClass(){
        name = "CodeRoar-92";
        balance = 1234;
        account_Number = 1000;
    }
    // Now we are making parametirezed constructor
    myClass(string name,int balance,int account_Number){
       this->name =name;
        this->balance =balance;    //Here we use the this pointer
        this->account_Number =account_Number;

    }

    myClass(string a, int b ){
        name=a;
        account_Number =b;
    }
    void show(){
        cout<<name<<"  "<<balance<<"  "<<account_Number<<"  "<<endl;
    }
};
int main(){
myClass A1,A2("Muhammad Ali", 12334,345),A3("Ahmad",123455);
A1.show();
A2.show();
A3.show();
return 0;
}


//w========== >>>>>> Inline Constructor <<<<<< ============
#include<iostream>
using namespace std;
class myClass{
    private:
    string name;
    int account_Number;
    int balance;
    public:
   //Default Constructor
    myClass(){
        name = "CodeRoar-92";
        balance = 1234;
        account_Number = 1000;
    }
    // Now we are making parametirezed constructor
inline myClass(string a,int b,int c): name(a),account_Number(b),balance(c){
    //This is the inline constructor
}
    myClass(string a, int b ){
        name=a;
        account_Number =b;
    }
    void show(){
        cout<<name<<"  "<<balance<<"  "<<account_Number<<"  "<<endl;
    }
};
int main(){
myClass A1,A2("Muhammad Ali", 12334,345),A3("Ahmad",123455);
A1.show();
A2.show();
A3.show();
myClass A4(A3); //Default copy constructor:
A4.show();
return 0;
}



//Now we are studing the destructor
#include<iostream>
using namespace std;
class myClass{
int age;
string name;
public:
myClass(){
    cout<<"Constructor Called: "<<endl;
}
~myClass(){
    cout<<"Destructor Called: "<<endl;
}
};
int main(){
myClass A1;
return 0;
}