#include<iostream>
using namespace std;

class BankDeposit{
    int p;
    int t;
    double r;
    float returnVal;
public:
    BankDeposit(){
    }

    BankDeposit(int x,int y,float z){
        p=x;
        t=y;
        r=z;
        returnVal=p;

        for (int i = 0; i <y; i++)
        {
            returnVal = returnVal*(1+r);
        }  
    }

    BankDeposit(int x,int y,int z){
        p=x;
        t=y;
        r=float(r)/100;
        returnVal=p;

        for (int i = 0; i <y; i++)
        {
            returnVal = returnVal*(1+r);
        }  
    }

    void show(){
        cout<<"Principle Amount: "<<p<<" | Return value after "<<t<<" years: "<<returnVal<<endl;
    }
};

int main(){
    BankDeposit bd1,bd2,b3;
    int a,b,c,C;
    cout<<"Enter the value of P R and T: ";
    cin>>a>>b>>c;
    bd1 = BankDeposit(a,b,c);
    bd1.show();


    return 0;
}