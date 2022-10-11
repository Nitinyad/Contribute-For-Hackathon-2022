#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<string>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // function object:function wrapped in a class so that it available like an object
  int arr[]={1,5,3,2,7,4};
  sort(arr,arr+6);
   sort(arr,arr+6,greater<int>());

  for (int i=0;i<6;i++){
    cout<<arr[i]<<endl;
  }

}