#include<iostream>
using namespace std;

//A Destructor never takes a value and never returns any value
//It is implicitly called by the compiler whenever the scope ends 

int count=0;

class num{
public:
    num(){
        count++;
        cout<<"This is the time when a constructor is called for object "<<count<<endl;
    }

    ~num(){
        cout<<"This is the time when destructor is called for object "<<count<<endl;
        count--;
    }
};

int main(){

    cout<<"We are inside our main() function."<<endl;
    cout<<"Creating first object n1."<<endl;
    num n1;
    {
        cout<<"Enter Block."<<endl;
        cout<<"Creating two more objects."<<endl;
        num n2,n3;
        cout<<"Exit Block."<<endl;
    }
    cout<<"Back to main()"<<endl;

    return 0;
}