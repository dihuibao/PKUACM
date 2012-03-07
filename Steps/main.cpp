#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t,x,y,d,l;
	cin >> t;
	while(t--){
		cin >> x >> y;
		d = y-x;
		l = int(sqrt(y*1.0-x));
		if(d==0)
			cout << 0 << endl;
		else if(d==l*l){
			cout << 2*l-1 << endl;
		}
		else if(d<=l*l+l){
			cout << 2*l << endl;
		}
		else{
			cout << 2*(l+1)-1 << endl;
		}
	}
	return 0;
}