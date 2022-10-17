#include<iostream>
using namespace std;
int main(){
    int* i;
    int a=4;
    i=&a;
    cout<<i<<" and "<<*i<<endl;
    cout<<"**************************"<<endl;

    //new operator or keyword is used to dynamically allocate memory 
    int *p=new int(40); //or new float(45.7), char etc. 
    cout<<p<<" and "<<*p<<endl;
    cout<<"**************************"<<endl;
    
    //array using new keyboard 
    int *arr=new int[3];
    
    arr[0]=10;
    *(arr+1)=20;
    arr[2]=30;
    //delete arr; //frees dynamically allocated block of memory or delete[] array_name 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<"**************************"<<endl;

    //delete operator

    return 0;
}