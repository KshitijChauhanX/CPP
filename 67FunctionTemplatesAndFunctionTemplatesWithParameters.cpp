#include<iostream>
using namespace std;

template<class T1, class T2> 
float Average(T1 a, T2 b){ //this function can be used to calculate average of floats as well due to templates
    float avg=(a+b)/2.0;
    return avg;
}

template<class T> 
void Swap(T &a, T &b){ //this function can be used to swap floats as well due to templates
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    float a;
    a=Average(5,2);
    cout<<"Average: "<<a<<endl;

    int x=7,y=8;
    cout<<x<<" | "<<y<<endl;
    Swap(x,y);
    cout<<x<<" | "<<y<<endl;
    return 0;
}