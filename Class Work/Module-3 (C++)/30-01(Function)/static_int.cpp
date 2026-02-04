#include<iostream>
using namespace std;
class account
{
    public:
    static int count;
    account()
    {
        count++;
        cout<<count<<endl;
    }
};
int account::count=0;
int main()
{
    account a1 = account();
    account a2 = account();
    account a3 = account();
    
    return 0;
    
}