//TLE ÒªÓÃ±³°üDP

#include <iostream>

using namespace std;

int hook[22],s[22],v[22];
int c,g,i,count;

void dfs(int n)
{
	int i;
	if(n==g){
		int sum=0;
		for(int j=0;j<g;j++){
			sum += v[j]*hook[s[j]];
		}
		if(sum==0)
			count++;
		return;
	}
	for(i=0;i<c;i++){
		s[n]=i;
		dfs(n+1);
	}
}

int main()
{
	cin >> c >> g;
	for(i=0;i<c;i++){
		scanf("%d",&hook[i]);
	}
	for(i=0;i<g;i++){
		scanf("%d",&v[i]);
	}
	memset(s,0,sizeof(s));
	count=0;
	dfs(0);
	printf("%d\n",count);
	return 0;
}