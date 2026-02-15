#include<iostream>
using namespace std;

//using pop
// int main()
// {
//     float length,width,area;
    
//     cout<<"Enter Length :";
//     cin>>length;
//     cout<<"Enter Width :";
//     cin>>width;
    
//     area=length*width;
//     cout<<"Area Of Rectangle Is :"<<area;
    
//     return 0;
// }

//using oop
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    float length,width;
    void display()
    {
    cout<<"Enter Length :";
    cin>>length;
    cout<<"Enter Width :";
    cin>>width;
    cout<<"Area of rectangle = " <<length*width;
    }
    
    
};
int main()
{
    Rectangle rect;
    rect.display();
    
    return 0;
    
}
