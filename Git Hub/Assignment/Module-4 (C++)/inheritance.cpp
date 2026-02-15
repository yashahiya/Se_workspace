#include <iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Student : public Person {
private:
    int rollNo;

public:
    void setStudent(string n, int a, int r) {
        setPerson(n, a);   
        rollNo = r;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll No: " << rollNo << endl;
    }
};


class Teacher : public Person {
private:
    string subject;

public:
    void setTeacher(string n, int a, string s) {
        setPerson(n, a);   
        subject = s;
    }

    void displayTeacher() {
        displayPerson(); 
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    Student s1;
    Teacher t1;

    s1.setStudent("Alice", 20, 101);
    t1.setTeacher("Mr. Smith", 40, "Mathematics");

    cout << "Student Details:" << endl;
    s1.displayStudent();

    cout << "\nTeacher Details:" << endl;
    t1.displayTeacher();

    return 0;
}
