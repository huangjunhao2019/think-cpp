#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter an integer"<<endl;
	cin>>x;
	if(cin.good()==false){
		cout<<"That was not an integer."<<endl;
		return -1;
	}
	return 0;
}

