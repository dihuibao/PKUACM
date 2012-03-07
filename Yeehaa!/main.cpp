#include <iostream>
#include <cmath>

using namespace std;

double pi = 3.1415926535897932384626;

int main()
{
	int t,k,n;
	double rr,r;
	cin >> t;
	for(k=1;k<=t;k++){
		cin >> rr >> n;
		cout << "Scenario #" << k << ":" << endl;
		r = rr/(1+1/sin(pi/n));
		printf("%.3f\n\n",r);
	}
	return 0;
}