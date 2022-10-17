#include<iostream>
using namespace std;

//Function prototype
//type function-name(arguments);

//Prototype is like an assurity to the compiler that it will find the definition of the function ahead

int sum(int a, int b);

// int sum(int a,b); --> Not Acceptable
// int sum(int,int); --> Acceptable

void greet(){
    cout<<"HELLO BOYA!!!"<<endl;
}

int main(){
    int n1,n2;
    cout<<"Enter two Numbers: ";
    cin>>n1>>n2; //n1 and n2 are actual parameters 
    cout<<"Sum: "<<sum(n1,n2)<<endl;
    greet();
    return 0;
}

int sum(int a, int b){ //a and b are formal parameters
    int c=a+b;
    return c;
}