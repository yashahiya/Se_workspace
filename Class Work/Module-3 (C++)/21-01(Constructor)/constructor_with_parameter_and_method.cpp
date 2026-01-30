#include<iostream>
using namespace std;
class student
{
  public:
  int id;
  string name;
  
  student(int i , string n)
  {
      id = i;
      name = n;
  }
  void display()
  {
      cout<<id<<" "<<name<<endl;
  }
};

int main()
{
    student s1= student(1427,"Yash");
    student s2 = student(2714,"Mohit");
    
    // cout<<s1.id<<endl;
    // cout<<s1.name<<endl;
    // cout<<s2.id<<endl;
    // cout<<s2.name<<endl;
    
    s1.display();
    s2.display();
    
    return 0;
}