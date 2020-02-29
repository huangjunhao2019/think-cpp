#include<iostream>
#include<cmath>
using namespace std;
void printLogarithm(double x){
	if(x<0.0){
		cout<<"Positive numbers only, please."<<endl;
		return ;
	}
	double result=log(x);
	cout<<"The log of x is "<<result;
}
void countdown(int n){
	if(n==0)
		cout<<"Blastoff! "<<endl;
	else{
		cout<<n<<endl;
		countdown(n-1);
	}
}
int main(){
	countdown(3);
	return 0;
}
