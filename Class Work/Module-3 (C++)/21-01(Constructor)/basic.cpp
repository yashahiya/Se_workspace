#include<iostream>
using namespace std;

class student
{
  public:
  int id;
  string name;
  
  //constructor
  student()
  {
      cout<<"A";
  }
  
  void display()
  {
      cout<<"B";
  }
};

int main()
{
    //student s1;
    student s1=student();  //object creation and constructor call
    cout<<"C";
    
    s1.display();  //method call
}