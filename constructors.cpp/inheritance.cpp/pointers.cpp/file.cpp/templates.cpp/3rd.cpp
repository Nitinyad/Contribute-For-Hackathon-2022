#include<iostream>
using namespace std;

template <class T1=int ,class T2=float>
class Harshit {
    public:
    T1 a;
    T2 b;
    Harshit(T1 x,T2,y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"value of a is"<<a<<endl;
        cout<<"value of b is"<<b<<endl;
    }
};


int main(){
//     Harshit<> H(4 ,3.3); 
//  H.display();

    return 0;
}