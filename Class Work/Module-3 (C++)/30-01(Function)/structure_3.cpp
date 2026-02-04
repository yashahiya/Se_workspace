#include<iostream>
using namespace std;
struct rectangle
{
    int height,width;
    
    rectangle(int h,int w)
    {
        height = h;
        width = w;
    }
    void display()
    {
        cout<<"Area Of Rectangle Is :"<<width*height;
    }
};

int main()
{
    struct rectangle rec=rectangle(5,6);
    rec.display();
}
