#include<iostream>
using namespace std;
class ajay
{
    public:
    int amt = 500;
};
class vijay : public ajay
{
    public:
    int amt2 = 300;
};

int main()
{
    vijay v;
    int ans = v.amt + v.amt2;
    cout<<"Total Is : "<<ans<<endl;

    return 0 ;
}