#include <iostream>
#include <cmath>

using namespace std;

double pi = 3.141592653589793;

double l(double a,double b,double c,double d)
{
	double x;
	x = sqrt((a-c)*(a-c)+(b-d)*(b-d));
	return x;
}

double s(double a,double b,double c)
{
	double p=(a+b+c)/2;
	p = sqrt(p*(p-a)*(p-b)*(p-c));
	return p;
}

double c(double s,double a,double b,double c)
{
	double y;
	y = 2*s/a/b;
	y = c/y;
	return y;
}

int main()
{
	double x1,y1,x2,y2,x3,y3,aa,bb,cc,ss;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3){
		aa = l(x1,y1,x2,y2);
		bb = l(x1,y1,x3,y3);
		cc = l(x2,y2,x3,y3);
		ss = s(aa,bb,cc);
		ss = c(ss,aa,bb,cc);
		printf("%.2lf\n",pi*ss);
	}
	return 0;
}