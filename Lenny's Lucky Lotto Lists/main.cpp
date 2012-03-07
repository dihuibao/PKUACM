#include <iostream>

using namespace std;

int t,i,j,n,m;
long long dp[11][2001];

int main()
{
	cin >> t;
	for(i=1;i<=10;i++){
		dp[i][1]=0;
	}
	for(i=1;i<=2000;i++){
		dp[1][i]=i;
	}
	for(i=2;i<11;i++){
		for(j=2;j<2001;j++){
			dp[i][j]=dp[i][j-1]+dp[i-1][j/2];
		}
	}
	for(i=1;i<=t;i++){
		cin >> n >> m;
		cout << "Case " << i << ": n = " << n << ", m = " << m << ", # lists = ";
		cout << dp[n][m] << endl;	
	}
	return 0;
}