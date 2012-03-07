#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,k,s,t,r;
	cin >> n >> k;
	while(k--){
		cin >> s >> t >> r;
		if(n%(s*t)==0){
			cout << int(ceil((n/(s*t)-1)*r+n*1.0/s)) << endl;
		}
		else{
			cout << int(ceil(n/(s*t)*r+n*1.0/s)) << endl;
		}
	}
	return 0;
}