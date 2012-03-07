#include <iostream>

using namespace std;

int m[7][7];
int n,i,j,mi;
int s[7];
int mm[7];

void dfs(int i)
{
	if(i==n){
		int ma=-500000;
		int sum;
		int k,l;
		for(k=0;k<n;k++){
			sum=0;
			for(l=0;l<n;l++){
				sum+=m[l][(k+s[l])%n];
			}
			if(sum>mi)
				return;
			if(sum>ma)
				ma=sum;
		}
		if(ma<mi)
			mi=ma;
		return;
	}
	int j;
	for(j=0;j<n;j++){
		s[i]=j;
		dfs(i+1);
	}
}

int main()
{
	while(scanf("%d",&n)){
		if(n==-1)
			break;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&m[i][j]);
			}
			s[i]=0;
		}
		mi=INT_MAX;
		dfs(0);
		printf("%d\n",mi);
	}
	return 0;
}