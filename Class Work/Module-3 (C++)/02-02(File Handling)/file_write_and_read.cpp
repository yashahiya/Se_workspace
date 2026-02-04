#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char data[100];

    //open a file in write mode
    ofstream outfile;
    outfile.open("afile.dat");
    cout<<"Writing To The File "<<endl;
    cout<<"Enter Your Name :";
    cin.getline(data,100);

    //write inputted data into file
    outfile<<data<<endl;
    cout<<"Enter Your Age :";
    cin>>data;
    cin.ignore();

    //again write inputted data into file
    outfile<<data<<endl;
    //close the open file
    outfile.close();

    //open a file in read mode
    ifstream infile;
    infile.open("afile.dat");
    cout<<"Reading From The File "<<endl;
    infile>>data;

    //write the data at the screen
    cout<<data<<endl;

    //again read the data from the file and display it 
    //infile>>data;
    //cout<<data<<endl;

    //close the open file 
    infile.close();

    
}