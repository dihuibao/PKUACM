#include <iostream>

using namespace std;

int main()
{
	int t,n,tt,a,b;
	cin >> t;
	while(t--){
		cin >> n;
		tt = n & -n;
		a = n-tt+1;
		b = n+tt-1;
		cout << a << " " << b << endl;
	}
	return 0;
}