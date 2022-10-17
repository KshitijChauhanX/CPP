#include<iostream>
using namespace std;


template <class T>

class vector{
public:    
    
    T* arr;
    int size;

    vector(int m){
        size=m;
        arr=new T[size];
    }

    T dotProduct(vector &v){
        T d=0;
        for (int i = 0; i < size; i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};

int main(){
    vector <int> v1(3);  //for integer values 

    v1.arr[0]=4;
    v1.arr[1]=5;
    v1.arr[2]=6;

    vector <int> v2(3);

    v2.arr[0]=7;
    v2.arr[1]=8;
    v2.arr[2]=9;

    int a=v1.dotProduct(v2);
    cout<<a<<endl;

    cout<<"**********************************************"<<endl;

    vector <float> f1(3);  //for float values 

    f1.arr[0]=4.1;
    f1.arr[1]=5.2;
    f1.arr[2]=6.3;

    vector <float> f2(3);

    f2.arr[0]=7.4;
    f2.arr[1]=8.5;
    f2.arr[2]=9.6;

    float b=f1.dotProduct(f2);
    cout<<b<<endl;

    cout<<"Templates saved our time as without them we would have required mutiple classes"<<endl; //similarly we can write vector<double> d1(3);
    return 0;
}