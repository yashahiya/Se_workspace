#include<iostream>
using namespace std;

class student
{
    //data members
    public:
    int id;
    string name;
    
    //method
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};

int main()
{
    //object creation 
    student s1;
    student s2;
    
    //value assign
    s1.id=101;
    s1.name="yash";
    s2.id=102;
    s2.name="mohit";
    
    //value print
    cout<<s1.id<<" "<<s1.name<<endl;
    cout<<s2.id<<" "<<s2.name<<endl;
    
    //method call
    s1.display();
    s2.display();
    
    return 0;
}