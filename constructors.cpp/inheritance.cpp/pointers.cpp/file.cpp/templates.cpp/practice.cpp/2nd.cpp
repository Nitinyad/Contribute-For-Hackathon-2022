#include<iostream>
using namespace std;

class time{
 int hours;
 int minutes;
 public:
 void getdata(int h,int m){
    hours=h;
    minutes=m;
 }
 void printdata(){
    cout<<"hours"<<hours<<endl;
    cout<<"minutees"<<minutes<<endl;
 }
 void sum(time,time);
};

void time:: sum(time T1,time T2){
   minutes=T1.minutes+T2.minutes;
   hours=minutes/60;
   minutes=minutes%60;
   hours=hours+T1.hours+T2.hours;

}

int main(){
    time t1,t2,t3;
    t1.getdata(2,35);
    t2.getdata(3,30);

    //sum
    t3.sum(t1,t2);
    cout<<"t1="; t1.printdata();
    cout<<"t2=" ; t2.printdata();
    cout<<"t3=" ;  t3.printdata();
    }