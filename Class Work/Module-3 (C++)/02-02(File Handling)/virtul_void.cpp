#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void draw()=0;
};
class rectangle : public shape
{
    public:
    void draw()
    {
        cout<<"Drawing rectangle.."<<endl;
    }
};
class circle : public shape
{
    public:
    void draw()
    {
        cout<<"Drawing circle.."<<endl;
    }
};


int main()
{
    rectangle rec;
    circle cir;
    rec.draw();
    cir.draw();

    return 0;
}
