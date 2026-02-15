#include <iostream>
using namespace std;

double add(int a, int b)
{
    return a + b;
}
double sub(int a, int b)
{
    return a - b;
}
double multi(int a, int b)
{
    return a * b;
}
double division(int a, int b)
{
    return a / b;
}

int main()
{
    int num1, num2, choice;

    cout << "Enter First Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;

    cout << "Choose An Operation : " << endl;
    cout << "Press 1 For Addition" << endl;
    cout << "Press 2 For substraction" << endl;
    cout << "Press 3 For Multiplication" << endl;
    cout << "Press 4 For division" << endl;
    cin >> choice;

    switch(choice)
    {
    case 1:
        cout << "Result Is : " << add(num1, num2) << endl;
        break;
    case 2:
        cout << "Result Is : " << sub(num1, num2) << endl;
        break;
    case 3:
        cout << "Result Is : " << multi(num1, num2) << endl;
        break;
    case 4:
        cout << "Result Is : " << division(num1, num2) << endl;
        break;
    default:
        cout << "Invalid Choice..." << endl;
    }

    return 0;
}