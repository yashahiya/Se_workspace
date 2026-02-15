#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char email[50] = "yashahiya@gmail.com", loginemail[50] = "";
    char pass[20] = "2468", loginpass[20] = "";

    // char ch1[50]="yash";
    // char ch2[50]="";

    cout << "Enter Your Email Id" << endl;
    cin >> loginemail;

    cout << "Enter Your Password" << endl;
    cin >> loginpass;

    if (strcmp(loginemail, email) == 0)
    {

        if (strcmp(loginpass, pass) == 0)
        {
            cout << "login successful";
        }
        else
        {
            cout << "Please Enter Correct Password";
        }
    }
    else
    {
        cout << "Please Enter Valid Email-Id";
    }

    return 0;
}