#include<iostream>
#include"Time.h"
using namespace std;
Time::Time(int h,int m,double secs){
	hour=h;
	minute=m;
	second=secs;
}
Time::Time(double secs){
	 hour=int(secs/3600);
	 secs=secs-hour*3600;
	 minute=int(secs/60);
	 secs=secs-minute*60;
	 second=secs;
}
void Time::increment(double secs){
	secs=hour*3600+minute*60+second+secs;
	hour=int(secs/3600);
	secs=secs-3600*hour;
	minute=int(secs/60);
	secs=secs-minute*60;
	second=secs;
}
void Time::print() const{
	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
Time Time::add(const Time &t2)const {
	double seconds=second+t2.second;
	int hours=0,minutes=0;
	if(seconds>=60){
		seconds-=60;
		minutes+=1;
	}
	minutes=minutes+t2.minute+minute;
	if(minutes>=60){
		minutes-=60;
		hours+=1;
	}
	hours=hours+hour+t2.hour;
	return Time(hours,minutes,seconds);
}
double Time::convertToSeconds() const{
	double m=hour*60+minute;
	return m*60+second;
}


