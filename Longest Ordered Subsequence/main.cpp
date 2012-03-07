#include <iostream>

using namespace std;

int num[1005];
int dp[1005];

int main()
{
	int n,i,j,ma;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> num[i];
		dp[i]=1;
	}
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(num[j]<num[i] && dp[j]>=dp[i])
				dp[i]=dp[j]+1;
		}
	}
	ma=0;
	for(i=0;i<n;i++){
		if(dp[i]>ma){
			ma = dp[i];
		}
	}
	cout << ma << endl;

	return 0;
}