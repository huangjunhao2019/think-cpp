/**
 * 这个程序旨在测试在指定vector之后，能不能通过push_back改变vector
 */
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a(4);
	for(int i=0;i<a.size();i++){
		a[i]=i;
	}
	a.push_back(10);
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
/**
 * 这个程序证明了vector即使指定大小之后，依然能够使用push_back，区别
 * 在于指定大小之后，可以直接使用vector[i]这种索引方式.
 */

