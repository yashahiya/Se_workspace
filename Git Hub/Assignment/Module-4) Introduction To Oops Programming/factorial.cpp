#include <iostream>
using namespace std;
long factorial(int n)
{
    if (n == 0 || n == 1)

        return 1;

    else

        return n * factorial(n - 1);
}
int main()
{
    int num;

    cout<<"Enter A Number : ";
    cin>>num;

    if(num<0)
    {
        cout<< "Factorial is not defined for negative numbers." << endl;

    }
    else
    {
        cout<<"Factorial Of : "<<num<<" Is : "<<factorial(num)<<endl;
    }
    return 0;
}