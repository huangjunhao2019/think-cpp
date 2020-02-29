//这个程序充分说明了局部变量的问题，string类是值传递的，类应该都是值传递
#include<iostream>
//#include<string>
//#include<ctype.h>
using namespace std;
void stringToUpper(string &s);
void stringToLower(string &s);
int main(){
	string a="HUANGJunHao";
	string b="HUANGJunHao";
	stringToUpper(a);
	stringToLower(b);
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	return 0;
}
void stringToUpper(string &s){
	int len=s.length();
        int i=0;
	while(i<len){
		s[i]=toupper(s[i]);
		i++;
	}
}
void stringToLower(string &s){
	int len=s.length();
	int i=0;
	while(i<len){
		s[i]=tolower(s[i]);
		i++;
	}
}
