#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        cin>>n;
        v.push_back(n);
    }

    vector<int>::iterator it;
     for (it=v.begin();it!=v.end() ; it++)
    {
        cout<<(*it)<<endl;
    }
    
    
return 0;
}