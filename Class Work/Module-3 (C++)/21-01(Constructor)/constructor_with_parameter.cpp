#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    string name;
    student(int i , string n)
    {
        id=i;
        name=n;
    }
};

int main()
{
    student s1 = student(1427,"Yash");
    student s2 = student(2714,"Mohit");
    
    cout<<s1.id<<" "<<s1.name<<endl;
    cout<<s2.id<<" "<<s2.name<<endl;
    
    return 0 ;
}