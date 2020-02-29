#include<iostream>
#include<cmath>
using namespace std;
void solve(int n);
int main(){
	int i=1;
	while(i<10){
		solve(i);
		i++;
	}
	return 0;
}
void solve(int n){
	for(int i=1;i<=n;i++){
		cout<<i<<"*"<<n<<"="<<i*n<<"\t";
	}
	cout<<endl;
}

