#include<iostream>
using namespace std;

//virtual fuctions in c++

class BaseClass
{
public:
    int var_base;
   virtual void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived=2;
    void display()
    {
        cout << "Dispalying Base class variable var_base " << var_base << endl;
        cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
    }
};
int main(){
 BaseClass *ptr;
    BaseClass obj_base;
    DerivedClass obj_derived;  
    ptr=  &obj_derived;
    ptr->var_base=1;
  ptr->display();

}