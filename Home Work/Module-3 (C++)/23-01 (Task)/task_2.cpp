#include<iostream>
using namespace std;
class a
{
    public:
    int a = 14;
};
class b
{
    public:
    int b = 27;
};
class c
{
    public:
    int c = 44;
};
class d :public a , public b , public c
{
    public:
    int d;
};


int main()
{
    d d1;
    cout<<d1.a<<endl;
    cout<<d1.b<<endl;
    cout<<d1.c<<endl;
    
    int ans = d1.a+d1.b+d1.c;
    cout<<"Total Is : "<<ans;
    
}
