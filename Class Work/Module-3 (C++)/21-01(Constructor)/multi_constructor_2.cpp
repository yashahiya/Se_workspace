#include<iostream>
using namespace std;
class count
{
    public:
    count(int a,int b)
    {
        int c = a+b;
        cout<<c<<endl;
    }
    count(double a,double b)
    {
        int d = a*b;
        cout<<d<<endl;
    }

};
int main()
{
    count c1=count(2,4);
    count c2=count(2.00,4.00);
    return 0;
}