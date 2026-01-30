#include<iostream>
using namespace std;
class count
{
    public:
    count()
    {
        cout<<"A";
    }
    ~count()
    {
        cout<<"B";
    }
};
int main()
{
    count c1 = count();

    return 0;
}