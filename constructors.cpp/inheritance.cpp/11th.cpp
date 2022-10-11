#include<iostream>
using namespace std;
class alpha {
int x;
public:
alpha(int i){
    x=i;
    cout<<"alpha contructor called"<<endl;
    
    }
    void print1(void){
        cout<<"x="<<x<<endl;
    }
};
class beta{
float p,q;
public:
beta(float i,float j):p(i),q(2*j+p){
    cout<<"beta constructed"<<endl;

}
void show(void){
    cout<<"the value of p="<<p<<endl;
    cout<<"the value of q="<<q<<endl;
}
};

class gamma:public alpha,public beta{
    int u,v;
    public:
    gamma(int a,int b,float c):alpha(a*2),beta(b,c){
        cout<<"gamma constructed"<<endl;
        v=b;
        u=a;
    }
    void show2(void){
        cout<<"the value of u="<<u<<endl;
         cout<<"the value of v="<<v<<endl;
        

    }
};


int main (){
// beta b(2.0,4.0);
// b.show();
gamma g(2,4,2.4);
g.print1();
g.show();
g.show2();


}
