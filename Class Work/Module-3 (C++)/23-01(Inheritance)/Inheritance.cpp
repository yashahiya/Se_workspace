#include<iostream>
using namespace std;
class ahiya
{
    public:
    void a()
    {
        cout<<"A Called"<<endl;
    }
};
class yash  : public ahiya
{
    public:
    void b()
    {
        cout<<"B Called"<<endl;
    }
};
int main()
{
    yash b1;
   b1.a();
   b1.b();

    return 0;
}