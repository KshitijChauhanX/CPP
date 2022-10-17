#include<iostream>
using namespace std;

class BaseClass{
public: 
    int var_base;
    void display(){
        cout<<"The value of var_base: "<<var_base<<endl;
    }
};

class DerivedClass: public BaseClass{
public: 
    int var_derived;
    void display(){
        cout<<"The value of var_base: "<<var_base<<endl;
        cout<<"The value of var_derived: "<<var_derived<<endl;
    }
};

int main(){
    
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer=&obj_derived; //Pointer to derived class

    base_class_pointer->var_base=34; //valid

    //base_class_pointer->var_derived=78; this throws error

    base_class_pointer->display();   //Although it is a pointer to derived class but display() of base class will get executed 

    DerivedClass *derived_class_pointer;

    derived_class_pointer=&obj_derived;

    derived_class_pointer->var_derived=98;
 
    cout<<"---------------------------------------------"<<endl;

    derived_class_pointer->display();

    return 0;
}