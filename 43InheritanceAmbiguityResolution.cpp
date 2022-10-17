#include<iostream>
using namespace std; //resolves the problem of inherited classes having functions with same name

//EXAMPLE 1(Ambiguity 1)
class Base1{
public:
    void greet(){
        cout<<"How are you?";
    }
};
class Base2{
public:
    void greet(){
        cout<<"Kaise Ho?";
    }
};

class Derived: public Base1, public Base2{
    int a;
public:
    void greet(){
        Base1::greet(); //resolves the ambiguity in the names and calls greet of Base1
    }
};

//EXAMPLE 2(Ambiguity 2)
class B{
public: 
    void say(){
        cout<<"Hello";
    }
};
class D: public B{
public:
    void say(){
        cout<<"Hello World"; //in such case the function in the derived class overrides the inherited function with the same name
    }
};
int main(){
    //Ambiguity 1
    Base1 base1obj;
    Base2 base2obj;
    Derived d;
    base1obj.greet();
    base2obj.greet();
    d.greet();

    //Ambiguity 2
    B b;
    D der;
    b.say();
    der.say();
    return 0;
}