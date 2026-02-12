#include <iostream>
using namespace std;


int number = 100;

void showGlobal() {
    cout << "Inside showGlobal(), global number = " << number << endl;
}

void showLocal() {
    int number = 50;  
    cout << "Inside showLocal(), local number = " << number << endl;
    
    
    cout << "Inside showLocal(), global number using ::number = " << ::number << endl;
}

void modifyGlobal() {
    number = 200;  
    cout << "Inside modifyGlobal(), global number modified to = " << number << endl;
}

int main() {
    cout << "In main(), global number = " << number << endl;

    showGlobal();
    showLocal();
    modifyGlobal();

    cout << "Back in main(), global number = " << number << endl;

    return 0;
}
