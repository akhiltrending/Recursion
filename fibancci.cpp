#include<iostream>
using namespace std;
int fibo (int n){
	if (n==1){
		return 1;
	}
	if (n==2){
		return 1;
	}
	int partial1=fibo(n-1);
	int partial2=fibo(n-2);
	return partial1+partial2;
}

int main(){
    int n;
	cin>>n;
	cout<<fibo(n);
}
//here the time complexity is 0(2n)..as because the gp progression
//is [r of(n)-1/r-1]; tc based on the nodes..
//and the space complexity is the o(n) as height of 
//recursion tree