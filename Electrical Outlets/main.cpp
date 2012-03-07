#include <iostream>

using namespace std;

int main()
{
	int t,n,i,sum,e;
	cin >> t;
	while(t--){
		cin >> n;
		sum=0;
		for(i=0;i<n;i++){
			cin >> e;
			sum += e;
		}
		sum -= (n-1);
		cout << sum << endl;
	}
	return 0;
}