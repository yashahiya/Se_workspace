#include<iostream>
using namespace std;
class calculator
{
    public:
    double add(double a,double b)
    {
        return a+b;
    }
    double sub(double a,double b)
    {
        return a-b;
    }
    double multi(double a,double b)
    {
        return a*b;
    }
    double division(double a,double b)
    {
        if(b != 0)
        return a/b;
        else
        {
            cout<< "Error: Division by zero!" << endl;
            return 0;
        }
    }
};
int main()
{
    calculator c1;
    
    int num1,num2;
    
    cout<<"Enter Two Numbers: ";
    cin>>num1>>num2;
    
    cout<<"Addition Is : "<<c1.add(num1,num2)<<endl;
    cout<<"Substraction Is : "<<c1.sub(num1,num2)<<endl;
    cout<<"Multiplication Is : "<<c1.multi(num1,num2)<<endl;
    cout<<"Diviosn Is : "<<c1.division(num1,num2)<<endl;


    return 0;
}