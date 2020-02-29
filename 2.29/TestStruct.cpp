#include<iostream>
using namespace std;
struct Point{
	double x,y;
};
struct Rectangle{
	Point corner;
	double width,height;
};
void swap(Point &p){
	double temp=p.x;
	p.x=p.y;
	p.y=temp;
}
int main(){
	Point corner;
        corner.x=3;
	corner.y=4;
	Rectangle rec;
	rec.corner=corner;
	rec.width=100.0;
	rec.height=200.0;
	cout<<rec.corner.x<<","<<rec.corner.y<<endl;
	cout<<rec.width<<","<<rec.height<<endl;
	swap(rec.corner);
	cout<<rec.corner.x<<","<<rec.corner.y<<endl;

	return 0;


}

