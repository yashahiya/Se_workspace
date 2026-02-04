#include<iostream>
#include<fstream>

using namespace std;

int main(int argc , char** argv)
{
    //open e new file for input/output operations
    //discarding any current in the file(assumes
    //a length of zero on opening) 

    fstream myFile("text.txg", ios::in | ios::out | ios::trunc);

    //add the characters "Hello World " to the file
    myFile << "Hello World";

    //seek to 6 characters from the beginning of the file 
    myFile.seekg(6,ios::beg);

    //read the next 5 characters from the file into a buffer
    char A[6];
    myFile.read(A,5);

    //end the buffer with a null terminating characters
    A[5] = 0;

    //output the contents read from the file and close it
    cout<<buffer<<endl;

    myFile.close();



}