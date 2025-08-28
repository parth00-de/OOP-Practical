// Design an educational Institution that maintains a database of all staff members.
// parth patel (B24CE1105)

#include <iostream>
using namespace std;

// Base Class
class Staff {
protected:
    string name, dept;
    int id;
public:
    void accept() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Department: ";
        cin >> dept;
        cout << "Enter ID: ";
        cin >> id;
    }
};

// Derived Class: Teacher
class Teacher : public Staff {
    string subject;
    float experience;
public:
    void accept() {
        Staff::accept();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Experience (in years): ";
        cin >> experience;
    }
    void display() {
        cout << name << "\t" << dept << "\t" << id 
             << "\t" << subject << "\t" << experience << "\n";
    }
};

// Derived Class: SupportStaff
class SupportStaff : public Staff {
    string areaOfSupport;
public:
    void accept() {
        Staff::accept();
        cout << "Enter Area of Support: ";
        cin >> areaOfSupport;
    }
    void display() {
        cout << name << "\t" << dept << "\t" << id 
             << "\t" << areaOfSupport << "\n";
    }
};

int main() {
    int t, s;
    cout << "Enter number of Teachers: ";
    cin >> t;
    Teacher teachers[t];

    cout << "Enter number of Support Staff: ";
    cin >> s;
    SupportStaff supports[s];

    cout << "\n=== Enter Teacher Details ===\n";
    for (int i = 0; i < t; i++) {
        cout << "\nTeacher " << i + 1 << ":\n";
        teachers[i].accept();
    }

    cout << "\n=== Enter Support Staff Details ===\n";
    for (int i = 0; i < s; i++) {
        cout << "\nSupport Staff " << i + 1 << ":\n";
        supports[i].accept();
    }

    // Teachers Display
    cout << "\n\n========== Teachers ==========\n";
    cout << "Name\tDepartment\tID\tSubject\tExperience\n";
    cout << "------------------------------------------------------\n";
    for (int i = 0; i < t; i++) {
        teachers[i].display();
    }

    // Support Staff Display
    cout << "\n========== Support Staff ==========\n";
    cout << "Name\tDepartment\tID\tArea of Support\n";
    cout << "------------------------------------------------------\n";
    for (int i = 0; i < s; i++) {
        supports[i].display();
    }

    return 0;
}
