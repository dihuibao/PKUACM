#include <iostream>

using namespace std;

double pi = 3.1415927;

int main()
{
	double d,t;
	int r;
	int c=0;
	while(cin >> d >> r >> t){
		if(r==0)
			break;
		c++;
		printf("Trip #%d: %.2f %.2f\n",c,d*pi*r/12/5280,d*pi*r/12/5280*60*60/t); 
	}
	return 0;
}