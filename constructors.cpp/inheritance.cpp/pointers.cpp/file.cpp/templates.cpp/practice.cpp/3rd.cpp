#include<iostream>
using namespace std;

class sample{
  int a;
  int b;
  public:
  void setdata(int p,int q){
    a=p;
    b=q;

  }
  friend float mean(sample s);
};

float mean(sample s){
    return (s.a+s.b)/2.0;
}

int main(){
  sample X;
  X.setdata(2,5);
  float sum=mean(X);
  cout<<"mean of that paasing value is"<<sum<<endl;


}