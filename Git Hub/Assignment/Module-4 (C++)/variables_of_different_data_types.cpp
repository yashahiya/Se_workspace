#include<iostream>
using namespace std;
int main()
{
    float const PI=3.14,radius=4.5;
    int length = 10;
    int width = 5;
    
    int area=length*width;
    cout<<"Length Is : "<<length<<endl;
    cout<<"Width Is : "<<width<<endl;
    cout<<"Area Of Rectangle Is  : "<<area<<endl;
    
    float circlearea=PI*radius*radius;
    cout<<"Radius Is : "<<radius<<endl;
    cout<<"Area Of Circle Is : "<<circlearea<<endl;
    
    return 0;
    
}