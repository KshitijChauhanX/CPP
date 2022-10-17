#include<iostream>
using namespace std;

//There are two types of header files 
//  1.Syatem Header Files : It comes with the compiler, <> are used 
//  2.User Defined Header Files : Written by the programmmer, "" are used  
// #include"this.h" The file should be present in the current directory 

int main(){
    int A=4,B=5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators in C++"<<endl;

    cout<<"Arithmetic Operators: "<<endl;
    cout<<"A+B: "<<A+B<<endl;
    cout<<"A-B: "<<A-B<<endl;
    cout<<"A*B: "<<A*B<<endl;
    cout<<"A/B: "<<A/B<<endl;
    cout<<"A%B: "<<A%B<<endl;
    cout<<"++A: "<<++A<<endl;
    cout<<"++B: "<<++B<<endl; //similarly --A and ++A and A++ are different 

    cout<<"****************************************************************\n";

    // cout<<"Assignment Operators: "<<endl;
    // int a=3,b=9;
    // char d='d';
    
    cout<<"Comparison Operator: "<<endl;
    cout<<"A==B: "<<(A==B)<<endl;
    cout<<"A!=B: "<<(A!=B)<<endl;
    cout<<"A>B: "<<(A>B)<<endl;
    cout<<"A<B: "<<(A<B)<<endl;    
    cout<<"A>=B: "<<(A>=B)<<endl;
    cout<<"A<=B: "<<(A<=B)<<endl;

    cout<<"****************************************************************\n";

    cout<<"Logical Operator: "<<endl;
    cout<<"((A==B) && (A>B)): "<<((A==B)&&(A>B))<<endl;
    cout<<"((A==B) || (A>B)): "<<((A==B)||(A>B))<<endl;
    cout<<"!(A==B): "<<!(A==B)<<endl;

    return 0;
}