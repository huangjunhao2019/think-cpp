#include<iostream>
#include<cmath>
#include<string>
using namespace std;
void solve(int n,string a,string b,string c);
int main(){
	int num;
	string a="A",b="B",c="C";
	cout<<"Please input an integer"<<endl;
	cin>>num;
	solve(num,a,b,c);
	return 0;
}
void solve(int n,string a,string b,string c){
	if(n<=0)
		return ;
	else{
		solve(n-1,a,c,b);
		cout<<a+"->"+c<<endl;
		solve(n-1,b,a,c);
	}
}
	
