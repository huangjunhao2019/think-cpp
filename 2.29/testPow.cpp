#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a=2;
	int num=1;
	while(num<=10){
		cout<<"2**"<<num<<"\t"<<a<<endl;
		a=a*2;
		num++;
	}
	return 0;
}
