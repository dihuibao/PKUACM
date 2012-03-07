#include <iostream>

using namespace std;

double num[1005];
int dp[1005];
int dp2[1005];

int max1(int a,int b,int *index)
{
	int ma = -100,i;
	for(i=a;i<=b;i++){
		if(dp[i]>ma){
			ma=dp[i];
			*index = i;
		}
	}
	return ma;
}

int max2(int a,int b,int *index)
{
	int ma = -1,i;
	for(i=b;i>=a;i--){
		if(dp2[i]>ma){
			ma=dp2[i];
			*index = i;
		}
	}
	return ma;
}

int main()
{
	int n,i,j,ma,m1,m2,mi1,mi2;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> num[i];
		dp[i]=1;
		dp2[i]=1;
	}
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
			if(num[j]<num[i] && dp[j]>=dp[i])
				dp[i]=dp[j]+1;
		}
	}
	for(i=n-2;i>=0;i--){
		for(j=n-1;j>i;j--){
			if(num[j]<num[i] && dp2[j]>=dp2[i])
				dp2[i]=dp2[j]+1;
		}
	}
	ma=0;
	for(i=0;i<n;i++){
		m1 = max1(0,i,&mi1);
		m2 = max2(i,n-1,&mi2);
		if(mi1==mi2){
			if(m1+m2-1>ma)
				ma=m1+m2-1;
		}
		else{
			if(m1+m2>ma)
				ma=m1+m2;
		}
	}
	cout << n - ma << endl;
	return 0;
}