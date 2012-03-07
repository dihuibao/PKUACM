#include <iostream>

using namespace std;

int num[100000];
int dp[100000];

int main()
{
	int d;
	int t=0,i,p,q,ma;
	while(cin >> d){
		if(d==-1){
			break;
		}
		i=0;
		dp[i]=1;
		num[i++]=d;
		while(cin >> d){
			if(d==-1)
				break;
			dp[i]=1;
			num[i++]=d;
		}
		ma=1;
		for(p=1;p<i;p++){
			for(q=0;q<p;q++){
				if(num[p]<=num[q] && dp[q]>=dp[p])
					dp[p]=dp[q]+1;
			}
			if(dp[p]>ma)
				ma = dp[p];
		}
		cout << "Test #" << ++t << ":" << endl;
		cout << "  maximum possible interceptions: " << ma << endl << endl;
		
	}
	return 0;
}