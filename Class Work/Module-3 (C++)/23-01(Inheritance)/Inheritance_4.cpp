#include<iostream>
using namespace std;
class A
{
    public:
    void a()
    {
        cout<<"a Called"<<endl;
    }
};
class B  : public A
{
    public:
    void b()
    {
        cout<<"B Called"<<endl;
    }
};
class C  : public A
{
    public:
    void c()
    {
        cout<<"C Called"<<endl;
    }
};

int main()
{
    B b2;
    C c2;


    c2.a();
    b2.b();
    c2.c();


}