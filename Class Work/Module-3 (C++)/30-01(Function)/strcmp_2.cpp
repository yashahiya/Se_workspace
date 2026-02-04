#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[10]="mango";
    char ch2[10]="";
    
    
    do
    {
        cout<<"What Is Your Favorite Fruit :";
        cin>>ch2;
    }
    while(strcmp(ch,ch2)!=0);
    
    cout<<"Answer Is Correct"<<endl;
    
    return 0;
}