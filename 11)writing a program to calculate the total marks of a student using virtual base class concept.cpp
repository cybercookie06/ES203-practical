..............................


#include <iostream>
#include <cstring>
using namespace std;

// ---------------- Base class ----------------
class Student {
protected:
    int  rollNo;
    char name[64];

public:
    void getStudent() {
        cout << "Enter Roll No : ";
        cin  >> rollNo;
        cout << "Enter Name    : ";
        cin.ignore(1000, '\n');
        cin.getline(name, 64);
    }

    void showStudent() {
        cout << "Roll No : " << rollNo << "\n";
        cout << "Name    : " << name   << "\n";
    }
};
