#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double vs,r,c,w;
	int n,i;
	cin >> vs >> r >> c >> n;
	for(i=0;i<n;i++){
		cin >> w;
		printf("%.3lf\n",c*r*w*vs/sqrt(1+c*r*w*c*r*w));
	}
	return 0;
}