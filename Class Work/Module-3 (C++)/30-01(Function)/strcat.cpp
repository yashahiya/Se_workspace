#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[20];
    char ch2[20];
    
    cout<<"Enter The Key String: ";
    cin.getline(ch,25);
    
    cout<<"Enter The Buffer String: ";
    cin.getline(ch2,25);
    
    cout<<strcat(ch,ch2)<<endl;
    
    return 0;
}