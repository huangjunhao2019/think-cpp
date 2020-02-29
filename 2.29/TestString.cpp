#include<iostream>
using namespace std;
void solve(string s);
int main(){
	string s;
	cin>>s;
	solve(s);
	return 0;
}
void solve(string s){
	int i=s.length()-1;
	while(i>=0){
		cout<<s[i]<<endl;
		i--;
	}
}
