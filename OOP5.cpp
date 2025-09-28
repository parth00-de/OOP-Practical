#include<iostream>
using namespace std;

class shape {
protected:
int X,Y;
public:
void get_data(){
cout<<"Enter 1st value:";
cin>>X;
cout<<"Enter 2nd value:";
cin>>Y;
}
virtual void displayArea()=0;


};


class Triangle:public shape{
public:
void displayArea(){
   float area=0.5*X*Y;
cout<<"\nArea of triangle: "<<area;

}

};

class rectangle:public shape{
    public:
    void displayArea(){
     float area=X*Y;  
    cout<<"Area of rectangle:"<<area;    
       
    }
};

int main(){
shape*ptr;
Triangle t;
ptr= &t;
cout<<"For triangle \n";
ptr->get_data();
ptr->displayArea();

shape*ptr1;
rectangle r;
ptr1=&r;
cout<<"\nFor rectangle\n";
ptr1->get_data();
ptr1->displayArea();

return 0;
}
