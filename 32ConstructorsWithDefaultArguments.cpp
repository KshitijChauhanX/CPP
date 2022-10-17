#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
public:
    Simple(int a,int b=8, int c=6){ //b becomes 8 when no argument is passed in place of b (same for c as well)
        data1=a;
        data2=b;
        data3=c;
    }

    void printData(){
        cout<<"The value of data: "<<data1<<" "<<data2<<" "<<data3<<endl;
    }
};

int main(){
    Simple s1(3,6,8),s2(5,6),s3(7);
    s1.printData();
    s2.printData();
    s3.printData();

    return 0;
}