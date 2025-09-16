#include<iostream> 
using namespace std;

class complex {
float real,img; public: complex() {
real = 0;
img = 0;
}
/*complex(float a, float b) { real = a;
img = b;
}*/
void display() {
cout << real << "+" << img << "i" << endl;
}
// Function Prototype
complex operator+(complex);
friend complex operator*(complex, complex);
friend istream &operator >> (istream &, complex &); friend ostream &operator << (ostream &, complex &);
};
// Function Definition
complex complex::operator+(complex c) { complex ob;
ob.real = real + c.real; ob.img = img + c.img; return ob;
}
complex operator*(complex c1 , complex c2) { complex ob;
ob.real= (c1.real * c2.real) - (c1.img * c2.img); ob.img =(c1.real * c2.img) + (c1.img * c2.real); return ob;
}
istream &operator >> (istream &in, complex &obj)
{
cout << "Enter the real part: "; in >> obj.real;
cout << "Enter the imaginary part: "; in >> obj.img;
return in;
}
ostream &operator << (ostream &out, complex &obj)
 
{
out << obj.real << "+"; out << obj.img << "i"; return out;
}
int main() {
/*float a, b, c, d;
cout << "Enter first complex number(real no. then imaginary no.): " << endl; cin >> a >> b;
complex C1(a, b); cout << "C1 = "; C1.display();
cout << "Enter second complex number(real no. then imaginary no.): " << endl; cin >> c >> d;
complex C2(c, d); cout << "C2 = "; C2.display();*/ complex C1, C2;
cout << "Enter values for first Complex no.: \n"; cin >> C1;
cout << "Enter values for second Complex no.: \n"; cin >> C2;
int choice; do {
 

Exit\n";
 
cout << "Choose the operation:\n1. Addition\n2. Multiplication\n3.

cin >> choice;
if (choice == 1) {
complex C3 = C1 + C2; cout << "Addition = "; C3.display();
} else if (choice == 2) { complex C4 = C1 * C2;
cout << "Multiplication = "; C4.display();
} else if (choice == 3) {
cout << "Exiting program...\n";
} else {
cout << "Invalid choice! Please try again.\n";
 
}
} while (choice != 3); return 0;
}
