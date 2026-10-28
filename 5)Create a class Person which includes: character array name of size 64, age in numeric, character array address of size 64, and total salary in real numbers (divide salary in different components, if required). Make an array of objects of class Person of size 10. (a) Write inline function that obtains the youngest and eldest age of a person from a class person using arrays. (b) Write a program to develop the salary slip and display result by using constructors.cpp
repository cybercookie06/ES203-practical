#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

using namespace std;

class Person {
private:
    char name[64];
    int age;
    char address[64];
    float basic;
    float hra;
    float da;
    float ta;
    float total_salary;

public:
    Person() {
        strcpy(name, "");
        age = 0;
        strcpy(address, "");
        basic = 0;
        hra = 0;
        da = 0;
        ta = 0;
        total_salary = 0;
    }

    Person(const char n[], int a, const char adds[], float b) {
        strcpy(name, n);
        age = a;
        strcpy(address, adds);
        basic = b;

        hra = basic * 0.20f;
        da = basic * 0.10f;
        ta = basic * 0.05f;
        total_salary = basic + hra + da + ta;
    }

    int getage() const {
        return age;
    }

    const char* getname() const {
        return name;
    }

    void display_salary_slip() const {
        cout << fixed << setprecision(2);
        cout << "\n-----------------------------------------\n";
        cout << "\n                  SALARY SLIP                 \n";
        cout << "\n-----------------------------------------\n";
        cout << "\nName                 : " << name;
        cout << "\nAge                  : " << age;
        cout << "\nAddress              : " << address;
        cout << "\n-----------------------------------------\n";
        cout << "\nBasic Salary         : " << basic;
        cout << "\nHRA                  : " << hra;
        cout << "\nDA                   : " << da;
        cout << "\nTA                   : " << ta;
        cout << "\n-----------------------------------------\n";
        cout << "\nTotal Salary         : " << total_salary;
        cout << "\n-----------------------------------------\n";
    }
};

inline int getYoungestIndex(Person P[], int n) {
    int youngest = 0;
    for (int i = 1; i < n; i++) {
        if (P[i].getage() < P[youngest].getage()) {
            youngest = i;
        }
    }
    return youngest;
}

inline int getEldestIndex(Person P[], int n) {
    int eldest = 0;
    for (int i = 1; i < n; i++) {
        if (P[i].getage() > P[eldest].getage()) {
            eldest = i;
        }
    }
    return eldest;
}

int main() {
    const int size = 10;
    Person P[size] = {
        Person("Rahul", 25, "Kolkata", 25000),
        Person("Amit", 30, "Delhi", 30000),
        Person("Ravi", 22, "Mumbai", 28000),
        Person("Sumit", 35, "Pune", 40000),
        Person("Ankit", 28, "Patna", 32000),
        Person("Rohit", 24, "Kolkata", 27000),
        Person("Vikas", 40, "Delhi", 45000),
        Person("Karan", 26, "Jaipur", 29000),
        Person("Suresh", 32, "Chennai", 35000),
        Person("Raj", 21, "Bangalore", 26000)
    };

    int youngest = getYoungestIndex(P, size);
    int eldest = getEldestIndex(P, size);

    cout << "\nYoungest Person";
    cout << "\nName : " << P[youngest].getname();
    cout << "\nAge  : " << P[youngest].getage() << "\n";

    cout << "\nELDEST Person";
    cout << "\nName : " << P[eldest].getname();
    cout << "\nAge  : " << P[eldest].getage() << "\n";

    cout << "\n\nSALARY SLIPS OF ALL EMPLOYEES\n";
    for (int i = 0; i < size; i++) {
        P[i].display_salary_slip();
    }

    system("pause");
    return 0;
}
