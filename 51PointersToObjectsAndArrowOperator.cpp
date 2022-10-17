#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
public: 
    void getData(){
        cout<<"Real Part: "<<real<<endl;
        cout<<"Imaginary Part: "<<imaginary<<endl;
    }
    void setData(int a,int b){
        real=a;
        imaginary=b;
    }
};

int main(){
    Complex c1;
    //Complex *ptr=&c1; Method 1
    Complex *ptr=new Complex; //Method 2
    //(*ptr).setData(1,54); //public members can also be accessed using a ptr to an object

    //Arrow Operator
    ptr->setData(1,4); //is same as (*ptr).setData(1,4);
    ptr->getData();     //is same as (*ptr).getData();

    //Array of objects using new keyword 
    Complex *pntr=new Complex[4];
    return 0;
}