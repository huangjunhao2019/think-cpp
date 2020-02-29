#include<iostream>
#include<cmath>
using namespace std;
int fib(int n);
int main(){
	int num;
	cin>>num;
	cout<<fib(num)<<endl;
	return 0;
}
int fib(int n){
	if(n==1 || n==0){
		return 1;
	}
	else
	{
		int temp=fib(n-1)+fib(n-2);
		return temp;
	}
}
