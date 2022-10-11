#include <iostream>
using namespace std;

// pointer to derived class
// runtime application

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;
    ptr = &obj_derived; // pointing to derived class

    ptr->var_base = 34;
    ptr->display(); // ptr is pointing to only base class
    // ptr->var_derived=34;//cannot access ,showing error
    DerivedClass *ptr2;
    ptr2=&obj_derived;
    ptr2->var_derived=99;
     ptr2->display();

}