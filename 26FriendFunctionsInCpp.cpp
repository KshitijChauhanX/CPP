#include<iostream>
using namespace std;

class Complex{
    int a,b;
public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }

    friend Complex sumComplex(Complex o1, Complex o2);

    void printNumber(){
        cout<<"Your Number: "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber(o1.a+o2.a,o1.b+o2.b); //dot operators are always used when accessing data members of objects using friend functions
    return o3;
}

//Properties of friend functions
//It is not in the scope of class and is not a member function
//It cant be called using object (dot operator)
//Can be invoked without object
//Usually takes objects of class as arguments 
//Can be declared inside private or public part of the class 
//Cant access members directly by the name and need obj.member_name to access data members and member functions

int main(){
    Complex c1,c2,c3;
    c1.setNumber(1,4);
    c1.printNumber();
    c2.setNumber(5,8);
    c2.printNumber();
    c3=sumComplex(c1,c2);
    c3.printNumber();
    return 0;
}