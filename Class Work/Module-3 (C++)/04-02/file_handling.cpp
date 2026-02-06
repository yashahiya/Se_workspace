#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char data[50];
    ofstream o1;   //write
    o1.open("yash.txt");
    
    cout<<"Enter Value: ";
    cin>>data;
    
    o1<<data<<endl;
    o1.close();
    
    
    
    ifstream i1;    //read
    i1.open("yash.txt");
    cout<<"Reading From The File : ";
    i1>>data;
    cout<<data<<endl;
    i1.close();
    
    return 0;
}