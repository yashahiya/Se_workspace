#include<iostream>
using namespace std;
int main()
{
    int marks;
    string name;


    cout<<"Enter student Name : ";
    cin>>name;
    cout<<"Enter Marks (0-100) :  ";
    cin>>marks;
    
    if(marks>=90)
    {
        cout<<"A Grade";
    }
    else if(marks>=70)
    {
        cout<<"B Grade";
    }
    else if(marks>=50)
    {
        cout<<"C Grade";
    }
    else if(marks>=35)
    {
        cout<<"D Grade";
    }
    else
    {
        cout<<"Fail";
    }
}