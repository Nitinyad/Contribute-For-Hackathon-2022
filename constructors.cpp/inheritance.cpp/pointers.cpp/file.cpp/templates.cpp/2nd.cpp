#include<iostream>
using namespace std;
/*
CLASS TEMPLATES USING MULTIPLE PARAMETRS
template <class t1,class t2>
class nameofclass{
    //body of class
}

*/

template<class T1,class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a,T2 b){
        data1=a;
        data2=b;
    }

    void display(){
        cout<<this->data1<<endl<<this->data2<<endl;
    }

};

int main(){
myclass<int ,char> obj(1,'c');
obj.display();


    return 0;
}