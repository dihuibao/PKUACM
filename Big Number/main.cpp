#include <iostream>
#include <cmath>

using namespace std;

double pi = 3.141592653589793239;
double e = 2.7182818284590452354;

int main()
{
	int t,n,i;
	double s;
	cin >> t;
	while(t--){
		cin >> n;
		s = 0.0;
		if(n>100000){
			s = log10(sqrt(2*pi*n))+n*log10(n/e);
		}
		else{
			for(i=1;i<=n;i++){
				s += log10(i*1.0);
			}
		}
		printf("%d\n",(int)(s+1e-7)+1);
	}
	return 0;
}