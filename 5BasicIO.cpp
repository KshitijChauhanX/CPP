#include<iostream>
using namespace std;

//stream in sequence of of bytes 
int main(){
    int num1,num2;
    cout<<"Enter the value of number 1: ";            // << is insertion operator   
    cin>>num1;                                      // >> is extraction operator
    cout<<"Enter the value of number 2: ";
    cin>>num2;

    cout<<"Sum: "<<num1+num2;

    //Reserved Keywords cant be used for variable names
    //size of various data types 
    return 0;
}
