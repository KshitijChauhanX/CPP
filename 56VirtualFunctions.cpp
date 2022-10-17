#include<iostream>
using namespace std;

class BaseClass{
public: 
    int var_base=1;
    virtual void display(){ //virtual is used to override the default behaviour that is instesd of display() of base class, display of derived class will be invoked 
        cout<<"1. The value of var_base: "<<var_base<<endl;
    }
};

class DerivedClass: public BaseClass{
public: 
    int var_derived=2;
    void display(){
        cout<<"2. The value of var_base: "<<var_base<<endl;
        cout<<"2. The value of var_derived: "<<var_derived<<endl;
    }
};

int main(){
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer=&obj_derived;
    base_class_pointer->display();

    return 0;
}