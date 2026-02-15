#include<iostream>
using namespace std;

class bankaccount
{
    private:
    double balance;
    
    public:
    bankaccount(double initialbalance)
    {
        balance=initialbalance;
    }
    
    void deposit(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
            cout<<"Deposited : "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid Deposit Amount..."<<endl;
        }
    }
    void withdraw(double amount)
    {
        if(amount>0 && amount <= balance)
        {
            balance-=amount;
            cout<<"Withdrawn : "<<amount<<endl;
        }
        else
        {
             cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
    void displaybalance()
    {
        cout<<"Current Balance Is : "<<balance<<endl;
    }
};
int main()
{
    bankaccount account(1000);
    account.displaybalance();
    
    account.deposit(500);
    account.displaybalance();
    
    account.withdraw(300);
    account.displaybalance();
    
     account.withdraw(1500);
     
     return 0;
    
    
    
    
    
}