#include <iostream>
using namespace std;

// class  derived : visibilty-mode base1,visibilty-mode base2
// {
//     class body of class derived;
// }

class base1
{
protected:
    int base1line;

public:
    void set_base1line(int a)
    {
        base1line = a;
    }
};
class base2
{
protected:
    int base2line;

public:
    void set_base2line(int a)
    {
        base2line = a;
    }
};
class base3
{
protected:
    int base3line;

public:
    void set_base3line(int a)
    {
        base3line = a;
    }
};


class derived : public base1,public base2,public base3
{ public:
void show(){
    cout<<"the value of base1line "<<' '<<base1line<<endl;
    cout<<"the value of base2line "<<' '<<base2line<<endl;
       cout<<"the value of base3line "<<' '<<base3line<<endl;
    cout<<"the value of baseline "<<' '<<base1line+base2line+base3line<<endl;

}

};

int main()
{ class derived der;
der.set_base1line(23);
der.set_base2line(2);
der.set_base3line(10);

der.show();

    return 0;
}
