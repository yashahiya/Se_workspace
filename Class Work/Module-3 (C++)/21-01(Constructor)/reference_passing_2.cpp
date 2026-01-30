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
    int id1,id2;
    string name1,name2;

    cout<<"Enter Your ID:";
    cin>>id1;
    cout<<"Enter Your Name:";
    cin>>name1;
    cout<<"Enter Your ID:";
    cin>>id2;
    cout<<"Enter Your Name:";
    cin>>name2;


    student s1 = student(id1,name1);
    student s2 = student(id2,name2);

    s1.display();
    s2.display();

    return 0;
}