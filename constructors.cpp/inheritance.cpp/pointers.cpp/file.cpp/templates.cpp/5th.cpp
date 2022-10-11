#include<iostream>
using namespace std;

template <class T>
class harshit{
    public:
    T a;
    harshit(T p){
      a=p;
    }
  void display();

};
  template <class T>
 void harshit<T>::display(){
cout<<"the data"<<a<<endl;
    }

template <class T>
void func(T a){
    cout<<"i am tempalized func()"<<a<<endl;
}
void func(int a){
    cout<<"i am first func()"<<a<<endl;
}
 
int main(){
    // harshit<int> h(3);
    // cout<<"the value"<<h.a<<endl;
    // h.display();
    func(4);  //exact match takes the highest prioroity
}