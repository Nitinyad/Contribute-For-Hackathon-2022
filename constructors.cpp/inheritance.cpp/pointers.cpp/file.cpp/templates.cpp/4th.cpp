#include<iostream>
using namespace std;

// float funaverage(int a,int b){
//     float avg=(a+b)/2.0;
//     return avg;
// }

template <class T1,class T2>
float funaverage(T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}



int main()
{ float a;
a=funaverage(2,3);
cout<<"the average of function is "<<a<<endl;
    return 0;
}