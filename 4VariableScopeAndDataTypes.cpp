#include<iostream>
using namespace std;
int glo=6;  //Global 

void show(){
    int a; //Local
    cout<<glo<<endl; //the global glo
}

int main(){
    //local is inside braces and global is outside braces or a function and can be accessed anywhere

    //int, float, double, char, bool -> builtin 

    //struct, union, enum -> user derfined

    //arrays, function, pointer -> derived 

    int a=6;
    int b=5;

    float pi=3.14;

    char c='a';

    bool val=true; //true prints 1 and false prints 0
    
    int glo=7;
    glo=8; //the local glo gets changed
    cout<<glo<<endl; //the local variables have precedence over global variables 

    show(); 

    cout<<"the value of a: "<<a<<" and the value of b: "<<b<<endl;
    cout<<"the value of pi: "<<pi<<endl;
    cout<<"the value of c: "<<c<<endl;
    cout<<"the value of val: "<<val<<endl;
    return 0;
}