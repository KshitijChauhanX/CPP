#include<iostream>
using namespace std;

template<class T1=int,class T2=float,class T3=char>
class Kshitij{
public:
    T1 a;
    T2 b;
    T3 c;

    Kshitij(T1 x, T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }

    void display(){
        cout<<"The value of a: "<<a<<endl;
        cout<<"The value of b: "<<b<<endl;
        cout<<"The value of c: "<<c<<endl;
    }
};

int main(){

    Kshitij<> K(56,78.5,'x'); //default data types specified in
    K.display();

    cout<<"+++++++++++++++++++++++++++++++++"<<endl;

    Kshitij<float, char, char> S(45.32,'O','G');
    S.display();

    return 0;
}