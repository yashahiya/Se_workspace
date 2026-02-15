#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int flag = 1;  

    cout << "Enter a string: ";
    cin >> str;

    int length = str.length();

    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
