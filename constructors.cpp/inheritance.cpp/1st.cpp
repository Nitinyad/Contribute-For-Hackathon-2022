#include <iostream>
using namespace std;
// base class
class employee
{
public:
    int id;
    float salary;
    employee()
    {
        id = 0;
        salary = 0;
    };
    employee(int inpid)
    {
        id = 1;
        salary = 34;
    }
};
// defalut visibility mode is private.
// private visibilty  mode :public memebers of base class becomes private members of the dervied class.
// public visibilty mode:public memebers of base class becomes public members of the dervied class.
// private members of base cannnot be inherit ;

// dervied class
class Programmer : public employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}