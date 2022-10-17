#include <iostream>
using namespace std;

/*
class Derived: visibility_mode Base1, visibility_mode Base2{
    Body of the Derived Class 
};
*/

//class 1
class Base1{
protected:
    int Base1Int;
public:
    void set_Base1Int(int a){
        Base1Int=a;
    }
};

//class 2
class Base2{
protected:
    int Base2Int;
public:
    void set_Base2Int(int a){
        Base2Int=a;
    }
};

//class 3
class Base3{
protected:
    int Base3Int;
public:
    void set_Base3Int(int a){
        Base3Int=a;
    }
};

//derived class inheriting both class1, class2 and class 3
//derived class gets data of class1, class 2 and class 3
class Derived: public Base1, public Base2, public Base3{
public:
    void show(){
        cout<<"The value of Base 1 Int: "<<Base1Int<<endl;
        cout<<"The value of Base 2 Int: "<<Base2Int<<endl;
        cout<<"The value of Base 3 Int: "<<Base3Int<<endl;
        cout<<"The value of their Sum: "<<Base1Int+Base2Int+Base3Int<<endl;
    }
};

int main(){
    Derived Number;
    Number.set_Base1Int(46);
    Number.set_Base2Int(57);
    Number.set_Base3Int(63);
    Number.show();
}
