#include<iostream>
using namespace std;

class Number{
    int a;
public:
    Number(){
        a=0;
    }

    Number(int num){
        a=num;
    }

    Number(Number &obj){
        cout<<"Copy Constructor called"<<endl;
        a=obj.a;
    }

    void display(){
        cout<<"The Number for this object: "<<a<<endl;
    }
};

int main(){
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();

    Number z1(z),z2;
    z1.display();

    z2=z; //Copy constuctor will not be called because the object has already been created but the value will be copied because of the assignment operator (=)
    //z2.display();

    Number z3=z; //Copy constructor will be invoked as we are calling it when object is being created
    z3.display();
    return 0;
}
//If we want that an object must exactly resemble another object then we make use of copy constructor 
//There is a default copy constructor in every class. Therefore, when no copy connstructor is present default copy const. runs. Therefore line 31 will work even without a copy const. but "Copy constructor called" will not be displayed 