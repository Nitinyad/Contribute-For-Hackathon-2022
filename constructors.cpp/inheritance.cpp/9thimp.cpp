#include <iostream>
using namespace std;

class student
{
protected:
    int rollno;

public:
    void set_number(int a)
    {
        rollno = a;
    }
    void display()
    {
        cout << "your roll no" << rollno << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print()
    {
        cout << "your result is here " << endl
             << "Maths" << maths << endl
             << "physics" << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float a)
    {
        score = a;
    }
    void print2()
    {
        cout << "score is" << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display2()
    {
        total = maths + physics + score;
        display();
        print();
        print2();
        cout << "total score is" << total << endl;
    }
};

int main()
{
    result r1;
    r1.set_number(2);
    r1.setmarks(67.0, 89.0);
    r1.setscore(77);
    r1.display2();
}