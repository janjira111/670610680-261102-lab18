#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double wi, hi;
	wi = min((R1.w+R1.x),(R2.w+R2.x)) - max((R2.x),(R1.x));
	hi = min((R1.y),(R2.y)) - max((R2.y-R2.h),(R1.y-R1.h));
	if(wi<=0 || hi <=0) return 0;
	return wi*hi;
}