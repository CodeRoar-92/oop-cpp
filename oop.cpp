#include <iostream>
using namespace std;
class person
{
private:
  int age;
  string name;
  string meaning_of_name;
  int number;

public:
  void input()
  {
    cout << "Enter Your age: " << endl;
    cin >> age;
    cout << "Enter Your name: " << endl;
    cin >> name;
    cout << "Enter Your meaning_of_name: " << endl;
    cin >> meaning_of_name;
    cout << "Enter Your number: " << endl;
    cin >> number;
  }
  void show()
  {
    cout << "Age: " << age << endl;
    cout << "Name: " << name << endl;
    cout << "meaning_of_name: " << meaning_of_name << endl;
    cout << "Number: " << number << endl;
  }
};
int main()
{
  person abdullah, rajab, afaq,ali, ahmad;
  abdullah.input();
  abdullah.show();
  rajab.input();
  rajab.show();
  afaq.input();
  afaq.show();
  ali.input();
  ali.show();
  ahmad.input();
  ahmad.show();
}