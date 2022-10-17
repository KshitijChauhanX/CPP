#include <iostream>
using namespace std;
/*
Syntax for initializtion list in cunstructor:
constructor(args list): Initialization section{
    assisgnment+other  code
} 

class Test{
    int a;
    int b;
public: 
    Test(int i,int j):a(i),b(j){
        Constructor Code
    }
};
*/

class Test{
    int a;
    int b;
public: 
    Test(int i,int j):a(i),b(j){ //a(i),b(i+j) | a(i),b(2*j) | a(i),b(a+j) will also but b(j),a(i+b) will give garbage value for a because it needs to be initialized first because of this order int a; int b; during declaration nad we can put a=i and b=j in the constructor body as well like Test(int i, int j):a(i){b=j;}
        cout<<"Constructor Executed"<<endl;
        cout<<"Value of a: "<<a<<endl;
        cout<<"Value of b: "<<b<<endl;
    }
};

int main(){
    Test t(1,2);
}