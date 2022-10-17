#include<iostream>
using namespace std;

/*
Control Structures
    1. Sequence Structure (a->b->c->...)
    2. Selection Structure (Conditions)
    3. Loop Structure (Iterative)
*/

int main(){
    int age;
    cout<<"Enter Age: ";
    cin>>age;

    //if-else ladder

    // if(age<18){
    //     cout<<"You cant come to my party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You will have to get a special pass to enter"<<endl;
    // }
    // else{
    //     cout<<"You can come to my party"<<endl;
    // }

    //switch

    switch(age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    
    case 22:
        cout<<"You are 22"<<endl;
        break;
    
    case 2:
        cout<<"You are 2"<<endl;
        break;

    default:
        cout<<"No special cases"<<endl;
        break;
    }

    cout<<"DONE"<<endl;
    return 0;
}