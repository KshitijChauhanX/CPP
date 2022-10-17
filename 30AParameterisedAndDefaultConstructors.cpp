#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    Complex(int x, int y){
        a=x;
        b=y;
    }

    void printNumber(){
        cout<<"The value is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main(){
    //Implicit call
    Complex c(4,6);
    c.printNumber();

    //Explicit Call
    Complex b=Complex(6,8);
    b.printNumber();
    return 0;
}