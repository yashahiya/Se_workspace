#include<iostream>
using namespace std;

inline int add(int a,int b)
{
    return a+b;
}

int main()
{
    int x,y;
    cout<<"\n Enter The Input Value:";
    cin>>x>>y;
    cout<<"\n The Output Is: "<<add(x,y);
    
    return 0;
}