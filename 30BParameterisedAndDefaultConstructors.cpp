#include<iostream>
using namespace std;

class Point{
    int x, y;
public: 
    Point(int a, int b){
        x=a;
        y=b;
    }

    void display(){
        cout<<"The point is ("<<x<<","<<y<<")"<<endl;
    }
};

int main(){
    Point p(1,1);
    Point q(4,6);

    p.display();
    q.display();
    return 0;
}