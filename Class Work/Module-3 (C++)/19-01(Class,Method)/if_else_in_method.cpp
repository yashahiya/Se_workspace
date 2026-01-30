#include<iostream>
using namespace std;
class emp
{
    public:
    string name;
    int salary;

    void display()
    {
        if(salary>=50000)
        {
            cout<<"Good";
        }
          else if(salary>=40000)
        {
            cout<<"Average";
        }
          else if(salary>=30000)
        {
            cout<<"below Average";
        }
          else if(salary>=20000)
        {
            cout<<"OK";
        }
        else
        {
            cout<<"bad";
        }
        //cout<<name<<" "<<salary<<endl;
    }
};
int main()
{
    string name1;
    int salaray1;

    cout<<"Enter Your Name : ";
    cin>>name1;

    cout<<"Enter Your salary : ";
    cin>>salaray1;

    emp e1;
    e1.name=name1;
    e1.salary=salaray1;

    e1.display();
}