#include<iostream>
using namespace std;

class rbi
{
    public:
    virtual int rate()
    {
        return 0;
    }
};
class sbi : public rbi
{
    public:
    int rate()
    {
        return 7;
    }
};
class icici  : public rbi
{
    public:
    int rate()
    {
        return 8;
    }
};
class axix  : public rbi
{
    public:
    int rate()
    {
        return 9;
    }
};

int main()
{
    rbi *r;  //refrence variable
    
    sbi s;
    icici i;
    axix a;
    
    r = &s;
    cout<<r->rate()<<endl;
    
    r = &i;
    cout<<r->rate()<<endl;
    
    r = &a;
    cout<<r->rate()<<endl;
    
    
    // sbi s;
    // icici i;
    // axix a;
    
    
   // cout<<s.rate()<<endl;
    //cout<<i.rate()<<endl;
    //cout<<a.rate()<<endl;
    
    return 0;
    
}









