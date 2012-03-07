#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t,n,r,c;
	cin >> t;
	while(t--){
		cin >> n;
		c=0;
		if(n>10){
			do{
				r = n%10;
				n = n/10;
				if(r>=5){
					n++;
				}
				c++;
			}while(n/10>0);
		}
		cout << n*(int)pow(10.0,c*1.0) << endl;
	}
	return 0;
}