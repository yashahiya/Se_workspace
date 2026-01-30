#include<iostream>
using namespace std;
class student
{
    public:
    student(int i,string n,string e)
    {
        cout<<i<<endl;
        cout<<n<<endl;
        cout<<e<<endl;
    }
    student(int i , string n)
    {
        cout<<i<<endl;
        cout<<n<<endl;
    }
    student(string n,string e)
    {
        cout<<n<<endl;
        cout<<e<<endl;
    }
};
int main()
{
    student s1=student(25,"yash","yashahiya@gmail.com");

    return 0;
}