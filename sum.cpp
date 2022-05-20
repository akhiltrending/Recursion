#include<iostream>
using namespace std;
int sumof(int n){
  if (n==0){ //base condition 
      return 0;
  }
  if (n==1){
      return 1;
  }
    int partans=sumof(n-1);//function calling again and again
    return n + partans;
}
int main (){
    int n;
    cin>>n;
   if (n<0){
        cout<<"Error";
    }
    else {
        cout<<sumof(n);
    }
}
//here the time complexity is 0(n);as 
//becasuse the no. of the nodes is 5 i mean n
//where as the space complexity is the 0(n);
//as also the  height of the nodes(5) is used ....
