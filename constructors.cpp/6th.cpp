#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
    simple(int a,int b=9){
        data1=a;
        data2=b;
    }
    void printdata();
};
void simple :: printdata(){
    cout<<"the value of data"<<' ' <<data1<<endl;
     cout<<"the value of data"<<' ' <<data2<<endl;
}
int main(){
    simple s(1);
    s.printdata();
}