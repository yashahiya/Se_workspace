#include<iostream>
using namespace std;

struct rectangle
{
    int height,width;
};

int main()
{
    struct rectangle rec;
    
    rec.height=5;
    rec.width=6;
    
    cout<<rec.height*rec.width<<endl;
}