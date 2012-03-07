#include <iostream>

using namespace std;

int dp[46];

int main()
{
	int i,t,n;
	dp[1]=2;
	dp[2]=3;
	for(i=3;i<46;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cin >> t;
	for(i=1;i<=t;i++){
		cin >> n;
		cout << "Scenario #" << i <<":" <<endl;
		cout << dp[n] << endl << endl;
	}
	return 0;
}