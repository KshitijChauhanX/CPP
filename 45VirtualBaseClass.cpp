#include<iostream>
using namespace std;

/*
Student->Test
Student->Sports

Test Sports
   |    |
   Result

We use virtual base class in order to remove ambiguity during inheritance 
eg. we can have name in Student which is inheriteed by Test and Sports. Test and Sports give rise to Result. Therefore, there is an ambiguity about ehich name is going to be inherited by Result as Test and Result both have a data member named name  
*/
class Student{
protected:
    int roll_no;
public:
    void set_rno(int a){
        roll_no=a;
    }
    void print_rno(){
        cout<<"Your roll no: "<<roll_no<<endl;
    }
};

// We can write public virtual as well 
class Test: virtual public Student{     
protected:
    float maths, physics;
public:
    void set_marks(float m1, float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"Your result: "<<endl
            <<"Maths: "<<maths<<endl
            <<"Physics: "<<physics<<endl;
    }    
};

class Sports: virtual public Student{
protected:
    float score;
public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"Your PT score: "<<score<<endl;
    }
};

class Result: public Test, public Sports{
private: 
    float total;
public: 
    void display(void){
        total=maths+physics+score;
        print_rno();
        print_marks();
        print_score();
        cout<<"Your total score: "<<total<<endl;
    }
};
int main(){
    Result Boy;
    Boy.set_rno(7689);
    Boy.set_marks(78.5,94.5);
    Boy.set_score(8);
    Boy.display();
    return 0;
}