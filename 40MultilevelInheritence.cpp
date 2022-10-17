#include <iostream>
using namespace std;

//class 1
class Student
{
protected:
    int roll_number;

public:
    void set_rollno(int);
    void get_rollno(void);
};
void Student::set_rollno(int r)
{
    roll_number = r;
}
void Student::get_rollno()
{
    cout << "The roll no of the student: " << roll_number << endl;
}

//class 2 inheriting class 1
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::get_marks()
{
    cout << "Maths: " << maths << " | Physics: " << physics << endl;
}

//class 3 inheriting class 2
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_rollno();
        get_marks();
        cout << "Your percentage: " << (maths + physics) / 2 << endl;
    }
};

//If we are inheriting B from A and C from B [A->B->C] this is called inhertance path 
int main()
{
    Result boy;
    boy.set_rollno(420);
    boy.set_marks(79, 87);
    boy.display();
    return 0;
}