#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
public:
    void setData(int a, float b){
        id=a;
        price=b;
    }
    void getData(){
        cout<<"ID of item: "<<id<<endl;
        cout<<"Price of item: "<<price<<endl;
    }
};

int main(){
    int size=3;
    int ID;
    float PRICE;
    Shop *ptr=new Shop[size]; //syntax is similar to int *ptr=new int[3];

    Shop *ptrTemp=ptr;

    for(int i=0;i<size;++i){
        cout<<"Enter ID and price of item: "<<i+1<<endl;
        cin>>ID>>PRICE;
        ptr->setData(ID,PRICE);
        ptr++;
    }

    for(int j=0;j<size;++j){
        cout<<"Item Number: "<<j+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}