#include<iostream>
using namespace std;
class emp
{
    public:
    string name ;
    int salary;

    //method
    void display()
    {
        
        cout<<name<<" "<<salary<<endl;
    }
};

int main()
{
    string name1;
    int salary1;

    cout<<"Enter Your Name";
    cin>>name1;

    cout<<"Enter Your Salary";
    cin>>salary1;

    emp e1;
    e1.name=name1;
    e1.salary=salary1;

    e1.display();
}