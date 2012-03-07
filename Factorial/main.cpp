#include <iostream>

using namespace std;

int main()
{
	int t,i,n,res;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> n;
		res=0;
		while(n){
			res+=n/5;
			n=n/5;
		}
		cout << res << endl;
	}
	return 0;
}