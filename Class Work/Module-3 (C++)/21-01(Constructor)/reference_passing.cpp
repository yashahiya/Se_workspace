#include<iostream>
using namespace std;
class student
{
    public:
    int id=0;
    string name="";

    student(int id,string name)
    {
        //this keyword it will be use for refrence passing when datatype and variable name is same
        
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout<<id<<" "<<name<<endl;
    }
};
int main()
{
    student s1 = student(12,"Yash");
    student s2 = student(14,"Mohit");

    s1.display();
    s2.display();

    return 0;
}