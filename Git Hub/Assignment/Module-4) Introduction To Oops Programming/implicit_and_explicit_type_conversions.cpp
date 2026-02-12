#include<iostream>
using namespace std;
int main()
{
     //Implicit Type Conversion
    int num = 10;
    double dnum;
    
    dnum=num;
    
    cout<<"Int Value Is : "<<num<<endl;
    cout<<"Converted To Double : "<<dnum<<endl;
    
    
    //Explicit Type Conversion
    
    double PI=3.14;
    int num2;
    
    num2=(int)PI;
    
    cout<<"PI Value Before Conversion Is: "<<PI<<endl;
    cout<<"PI Value After Conversion Is: "<<num2<<endl;
    
     return 0;
}