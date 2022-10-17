#include<iostream>
using namespace std;
class Employee{
public:
    int id;
    float salary;
public:
    Employee(int inpid){
        id=inpid;
        salary=34.0;
    }
    Employee(){}
};
// class derived_class : visibility_mode base_class{};
class Programmer:public Employee{ //default visibility mode is private if not specified
public:
    Programmer(int inpid){
        id=inpid;
    }
    int languageCode=9;
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    Employee Harry(1),Rohan(2);
    cout<<Harry.salary<<endl;
    cout<<Rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}