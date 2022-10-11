#include <iostream>
using namespace std;

class point{
    int x, y;
    public:
    point(int a,int b){
      y=b;
      x=a;
    }
    void displaypoint(){
        cout<<"the value("<<x<<", "<<y<<")"<<endl;
    }
};


int main(){
    point p(1,1);
    p.displaypoint();

    point p2(4,6);
    p2.displaypoint();
    
    
        return 0;
}