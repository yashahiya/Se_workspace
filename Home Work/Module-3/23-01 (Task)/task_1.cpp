#include <iostream>
using namespace std;
class shape
{
public:
    int a = 5;
    int b = 4;
};
class tri : public shape
{
public:
    int trians = 0.50 * a * b;
    void triansdis()
    {
        cout << "Area Of Triangle Is : " << trians << endl;
    }
};
class rec : public shape
{

public:
    int recans = a * b;
    void recansdis()
    {
        cout << "Area Of Rectangle Is : " << recans << endl;
    }
};
class cir : public shape
{
public:
    float cirans = 3.14 * b * b;
    void ciransdis()
    {
        cout << "Area Of Circle Is : " << cirans << endl;
    }
};

int main()
{
    //  int first,second;
    // cout<<"Enter value : ";
    // cin>>first;
    // cout<<"Enter value : ";
    // cin>>second;

    tri t1;
    t1.triansdis();
    // cout<<"Area Of Triangle Is : "<<t1.trians<<endl;

    rec r1;
    r1.recansdis();
    // cout<<"Area Of Rectangle Is : "<<r1.recans<<endl;

    cir c1;
    c1.ciransdis();
    // cout<<"Area Of Circle Is : "<<c1.cirans<<endl;
}
