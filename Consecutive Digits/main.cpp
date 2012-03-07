#include <iostream>

using namespace std;

int main()
{
	int t,i,j,n,d,b,e,z;
	double l;
	cin >> t;
	for(i=1;i<=t;i++){
		cin >> n >> d >> b >> e;
		cout << "Problem set " << i << ": " << n << " / " << d << ", base 7 digits " << b << " through " << e <<": ";
		n = n%d;
		for(j=0;j<=e;j++){
			z = int(n*7.0/d);
			if(j>=b)
				cout << z;
			n=7*n%d;
		}
		cout << endl;
	}
	return 0;
}