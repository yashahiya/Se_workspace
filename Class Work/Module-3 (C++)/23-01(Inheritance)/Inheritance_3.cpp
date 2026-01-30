#include<iostream>
using namespace std;
class A
{
    public:
    void a()
    {
        cout<<"A Called"<<endl;
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
class C  : public B
{
    public:
    void c()
    {
        cout<<"C Called"<<endl;
    }
};

int main()
{
    C c2;
    c2.a();
    c2.b();
    c2.c();

    return 0 ;
}