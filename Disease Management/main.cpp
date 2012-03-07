#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int c[1005];
int a[20];
int n,d,k,i,j,m,p,ma,co,t;

int stoi()
{
	int sum=0,i;
	for(i=0;i<d;i++){
		sum*=2;
		sum+=a[i];
	}
	return sum;
}

int main()
{
	scanf("%d %d %d",&n,&d,&k);
	for(i=0;i<n;i++){
		memset(a,0,sizeof(a));
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%d",&p);
			a[p-1]=1;
		}
		c[i]=stoi();
	}
	memset(a,0,sizeof(a));
	for(i=d-1;i>=d-k;i--){
		a[i]=1;
	}
	ma=0;
	do{
		t=stoi();
		co=0;
		for(i=0;i<n;i++){
			if((t|c[i])==t)
				co++;
		}
		if(co>ma)
			ma=co;
	}while(next_permutation(a,a+d));
	printf("%d\n",ma);
	return 0;
}