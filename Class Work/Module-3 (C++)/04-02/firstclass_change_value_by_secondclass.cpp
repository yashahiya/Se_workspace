#include<iostream>
using namespace std;

class myclass
{
    friend class secondclass;
    
    private:
    int secret=5;
    
    public:
    void printmember()
    {
    cout<<secret<<endl;
    }
    
};
class secondclass
{
    public:
    void change(myclass& yourclass,int x)
    {
        yourclass.secret=x;
    }
};

int main()
{
    myclass mycl;
    secondclass secl;
    mycl.printmember();
    secl.change(mycl,10);
    mycl.printmember();
    mycl.printmember();
    
    return 0;
    
    
    
    
    
    
}