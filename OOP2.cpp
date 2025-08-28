
#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
 string name, department, dateofJoining, address;
 long phone;
 int empID;
 static int count;
public:
 Employee() {
 cout << "\n==============================";
 cout << "\n Default Constructor Called";
 cout << "\n==============================\n";
 name = department = dateofJoining = address = "";
 empID = 0;
 phone = 0;
 count++;
 }
 Employee(string n, int id, string dept, string doj, string addr, long ph) {
 cout << "\n==============================";
 cout << "\n Parameterized Constructor Called";
 cout << "\n==============================\n";
 name = n;
 empID = id;
 department = dept;
 dateofJoining = doj;
 address = addr;
 phone = ph;
 count++;
 }
 Employee(const Employee &e) {
 cout << "\n==============================";
 cout << "\n Copy Constructor Called";
 cout << "\n==============================\n";
 name = e.name;
 department = e.department;
 address = e.address;
 empID = e.empID;
 dateofJoining = e.dateofJoining;
 phone = e.phone;
 count++;
 }
 ~Employee() {
 cout << "\n----------------------------------";
 cout << "\nDestructor for Employee: " << name;
 count--;
 cout << "\nNo. of objects remaining: ";
 showcount();
 cout << "\n----------------------------------\n";
 }
 void accept();
 void display();
 void Title();
 static void showcount();
};
void Employee::accept() {
 cout << "\n===== Enter Employee Details =====";
 cout << "\nEnter employee name: ";
 cin >> name;
 cout << "Enter employee ID: ";
 cin >> empID;
 cout << "Enter contact number: ";
 cin >> phone;
 cout << "Enter department name: ";
 cin >> department;
 cout << "Enter date of joining: ";
 cin >> dateofJoining;
 cout << "Enter employee address: ";
 cin >> address;
 cout << "==================================\n";
}
void Employee::display() {
 cout << "\n==================================";
 cout << "\n Employee Information";
 cout << "\n==================================";
 cout << "\n Name : " << name;
 cout << "\n Employee ID : " << empID;
 cout << "\n Contact Number : " << phone;
 cout << "\n Department : " << department;
 cout << "\n Date of Joining: " << dateofJoining;
 cout << "\n Address : " << address;
 cout << "\n==================================\n";
}
void Employee::Title() {
 cout << "\n==================================";
 cout << "\n Welcome to MMCOE Employee DB";
 cout << "\n==================================\n";
}
void Employee::showcount() {
 cout << count;
}
int Employee::count = 0;
int main() {
 Employee e1;
 e1.Title();
 e1.accept();
 e1.showcount();
 Employee details("mandy", 1104, "Comp", "Jan", "MMCOE", 9011003389);
 details.display();
 Employee e3 = details;
 e3.display();
 Employee *ptr = new Employee("nihal", 1103, "Comp", "Jan", "MMCOE",
9011003389);
 ptr->display();
 delete ptr;
 return 0;
}