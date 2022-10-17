#include<iostream>
using namespace std;

class A{
    int a;
public:
    void setData1(int a){
        this->a=a;      //USE 1   //in C++ local variables are given more priority therefore, the member function a is not accessed in a=a; both a's are local
    }

    A & setData2(int a){
        this->a=a;      //USE 2  
        return *this;
    }

    void getData(){
        cout<<"The value of a: "<<a;
    }
};

int main(){
    //this is a keyword which is a pointer to the object which points to the object which invokes the member function
    A a;
    //a.setData1(5);
    //a.getData();

    //OR
    a.setData2(5).getData(); //setData2 return refernece to the object which is used to call getData therefore we don't need to write a.getData() separately
    return 0;
}