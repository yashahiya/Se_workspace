#include<iostream>
using namespace std;
int main()
{
    int secretnum=14,guess;
    
    cout<<"Guess The Number Between 1 to 100!"<<endl;;
    
    while(true)
    {
        cout<<"Enter Your Guess :";
        cin>>guess;
        
        if(guess>secretnum)
        {
            cout<<"Number Is Too High! Try Again...."<<endl;
        }
        else if(guess<secretnum)
        {
            cout<<"Number Is Too Low! Try Again...."<<endl;
        }
        else
        {
            cout<<"Congratulations! You guessed the correct number!"<<endl;
            break;
        }
    }
    return 0;
    
}