#include <iostream>
#include <cmath>

using namespace std;

const double Pi = 3.1415926;

int main()
{
	int D,V;
	double d;
	while(cin >> D >> V){
		if(D==0 && V==0)
			break;
		d = pow(D*D*D*1.0-6*V/Pi,1.0/3);
		printf("%.3lf\n",d);
	}
	return 0;
}