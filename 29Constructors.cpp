#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:            //a constructor should be declared in the public section of the class
    Complex(void); //creating a constructor. It is a special member function used to initialise the objects of its class. 
                   //Same name as the name of the class. It is automatically invoked whenever an object is created 
                   //constructor declaration and it is a default constructor as it does not take any parameters 
                   //they cannot return values and do not have return types 
                   //we cannot refer to their address 
    void printNumber(){
        cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
    } 
};

Complex::Complex(void){
    a=10;
    b=20;
    cout<<"Hello WOrld"<<endl;
}

int main(){

    Complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}