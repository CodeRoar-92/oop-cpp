
//It is the variable of class and it has one copy and shared to every object.Or it belong to class and onec time it is created=>static variable
//But normal variables are the varables of the objects and it vary it belong to objects.
 #include<iostream>
 using namespace std;
 class yahoo{
 private:
 int x;
 static int n;
 public:
 yahoo(){
     n++;
     x=n;
 }
 void Show(){
     cout<<x<<" is created so far:"<<endl;
 }
 };
 int yahoo::n;
 int main(){
 yahoo y1,y2,y3;
 y1.Show();
 y2.Show();
 y3.Show();
 return 0;
 }

#include<iostream>
using namespace std;
class myClass{
int balance,account_number,y;
string name;
static int x;
public:
myClass(int a,int b,string c){
    balance =a;
    account_number =b;
    name =c;
    x++; //If i am not intalize it to the y and want to print the value of x for object1,2,3; the value is increament but
    y=x;
}
void show(){
    cout<<"Balance: "<<balance<<" Account_Number: "<<account_number<<" Name: "<<name<<" X "<<y<<endl;
}
};
int myClass::x;
int main(){
myClass A1(12,100,"Abdullah"),A2(13,101,"Rajab");
A1.show();
A2.show();

return 0;
}

#include<iostream>
using namespace std;
class students{
static int r;
int roll_number;
string name;
int marks;
public:
students(string a, int b){
    name = a;
    marks =b;
    r++;
roll_number =r;
}
void putData(){
    cout<<"Roll Number: "<<roll_number<<endl<<"Name: "<<name<<endl<<"Marks: "<<marks<<endl;
}
};
int students::r;
int main(){
students s1("Abdullah",721),s2("Rajab",781);
s1.putData();
s2.putData();
return 0;
}

#include<iostream>
using namespace std;

// static
// total_customer =0;
// A1: name acc-num balance =>  tot total value is a static it is same for every new object created and it is on to you. you can also incresment it and is mostly used to update the value as counter but the value of name,acc_num and balance is differnt for every new object
// A2: name acc-num balance => tot

class customer{
private:
static int total_customer;
string name;
int balance,acc_num;
public:
customer(string name,int balance, int acc_num){
    this->name=name;
    this->balance=balance;
    this->acc_num=acc_num;
    total_customer++;
}
void show(){
    cout<<name<<"  "<<balance<<"  "<<acc_num<<"  "<<total_customer<<endl;
}
};
int customer::total_customer;
int main(){
customer A1("Rajab",1000,1);
customer A2("Abdur Rehman",1001,2);
A1.show();
A2.show();
return 0;
}

#include<iostream>
using namespace std;
class customer{
private:
static int total_customer;
string name;
int balance,acc_num;
public:
customer(string name,int balance, int acc_num){
    this->name=name;
    this->balance=balance;
    this->acc_num=acc_num;
    total_customer++;
}
void show(){
    cout<<name<<"  "<<balance<<"  "<<acc_num<<"  "<<total_customer<<endl;
}
// Now Check the value of stactic member variable (total_customer) is that have same value  for every object.we says that the static data member have same value is true or fale. we call this function through differnt objects and check it.

void display_total_customer(){
    cout<<"Total-Customer: "<<total_customer<<endl;
}
};
int customer::total_customer;
int main(){
customer A1("Rajab",1000,1);
customer A2("Abdur Rehman",1001,2);
A1.display_total_customer();
A2.display_total_customer();
//The output for both objects are same A1 and A2. Now we can say that it has same values.
return 0;
}

#include<iostream>
using namespace std;
class customer{
private:
static int total_customer;
string name;
int balance,acc_num,t;
public:
customer(string name,int balance, int acc_num){
    this->name=name;
    this->balance=balance;
    this->acc_num=acc_num;
    total_customer++;
    t=total_customer;//Here we store the value of the object that is different
}
void show(){
    cout<<name<<"  "<<balance<<"  "<<acc_num<<"  "<<total_customer<<endl;
}

void display_total_customer(){
    cout<<"Total-Customer: "<<t<<endl;
}
};
int customer::total_customer;
int main(){
customer A1("Rajab",1000,1);
customer A2("Abdur Rehman",1001,2);
A1.display_total_customer();
A2.display_total_customer();
//The output for both objects are differnt A1 and A2. Now we can say that it has different values.
return 0;
}

//We can also access the stactic data members without creating objects
#include <iostream>
using namespace std;
class customer
{
private:
    string name;
    int balance, acc_num ;

public:
static int total_customer; //If does make it private the program make it error
    customer(string name, int balance, int acc_num)
    {
        this->name = name;
        this->balance = balance;
        this->acc_num = acc_num;
        total_customer++;
    }
    void show()
    {
        cout << name << "  " << balance << "  " << acc_num << "  " << total_customer << endl;
    }

    void display_total_customer()
    {
        cout << "Total-Customer: " << total_customer << endl;
    }
};
int customer::total_customer;
int main()
{
    customer A1("Rajab", 1000, 1);
    customer A2("Abdur Rehman", 1001, 2);
customer::total_customer =10;//Here we can access static data member without  object . Customer is a class name.
A1.display_total_customer();
A2.display_total_customer();
    return 0;
}

//Static Member Function
//Static Member function only access the static data member 
#include <iostream>
using namespace std;
class customer
{
private:
    string name;
    int balance, acc_num,amount;
    static int total_customer;
static int total_balance;
public:
    customer(string name, int balance, int acc_num)
    {
        this->name = name;
        this->balance = balance;
        this->acc_num = acc_num;
        total_customer++;
        total_balance+=balance;
    }
    void show()
    {
        cout << name << "  " << balance << "  " << acc_num << "  " << total_customer << endl;
    }
    static void access_total()
    {
        cout << "Total Number of Customer "<<total_customer << endl;
        cout << "Total balance is "<< total_balance << endl;
    }

    void deposit(int amount){
       if(amount>0){
        balance+=amount;
       total_balance+=amount;
       }
    }
    void withDraw(int amount){
        if(amount<=balance && amount>0){ 
            balance -= amount;
            total_balance -=amount;
        }
    }
    void display_total_customer()
    {
        cout << "Total-Customer: " << total_customer << endl;
    }
};
int customer::total_customer;
int customer::total_balance;
int main()
{
    customer A1("Rajab", 500, 1);
    customer A2("Abdur Rehman", 500, 2);
    A1.deposit(800);
    A2.withDraw(500);
    customer::access_total();
    return 0;
}