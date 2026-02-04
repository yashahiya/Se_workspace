#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[20];
    char ch2[20];
    
    cout<<"Enter The Key String : ";
    cin.getline(ch,25);
    
    cout<<strcpy(ch2,ch)<<endl;
    
    return 0;
}