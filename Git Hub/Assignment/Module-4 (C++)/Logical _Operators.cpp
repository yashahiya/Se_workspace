#include <iostream>
using namespace std;
int main()
{
    int id = 12, pass = 34, mainpass = 3456, id1, pass1;

    cout << "Enter Id : ";
    cin >> id1;
    cout << "Enter Password : ";
    cin >> pass1;

    // end(&&)

    if (id1 == id && pass1 == pass)
    {
        cout << "Login Success...";
    }
    else
    {
        cout << "Enter Valid Details...";
    }

    // or(||)
    if (pass1 == mainpass || pass1 == pass)
    {
        cout << "Password Is Right..";
    }
    else
    {
        cout << "Password Does Not Match With regular Password And Main Password";
    }

    // not (!)
    if (id1 != id)
    {
        cout << "Enter Valid Id..";
    }
    else
    {
        cout << "Id Is Valid...";
    }

    return 0;
}