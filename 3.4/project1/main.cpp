#include<iostream>
#include"Time.h"
using namespace std;
int main(){
	Time currentTime(9,14,30.0);
	currentTime.increment(500.0);
	currentTime.print();

	Time breadTime(3,35,0.0);
	Time doneTime=currentTime.add(breadTime);
	doneTime.print();
	return 0;
}
