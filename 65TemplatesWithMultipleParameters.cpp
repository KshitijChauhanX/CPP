#include<iostream>
using namespace std;

/*SYNTAX

CLASS TEMPLATES WITH MUTIPLE PARAMETERES (ONE, TWO OR MORE THAN TWO) (COMMMA SEPARATED)

template <class T1,class T2,...>
class name{
    body
};

*/

template<class T1,class T2>
class myClass{
public:
    T1 data1;
    T2 data2;

    myClass(T1 a,T2 b){
        data1=a;
        data2=b;
    }

    void display(){
        cout<<this->data1<<" | "<<this->data2<<endl;
    }
};

int main(){

    myClass<int,char> obj1(10,'x');
    obj1.display();

    myClass<double,string> obj2(10.675,"OH YEAH");
    obj2.display();

    myClass<float,int> obj3(92.11,420);
    obj3.display();

    return 0;
}