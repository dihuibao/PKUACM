#include <iostream>

using namespace std;

int load[105][105];
int near[105];

int main()
{
	int n,i,j,m,a,b,mi,mip,sum=0,tmip;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&load[i][j]);
		}
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		load[a][b]=0;
		load[b][a]=0;
	}
	memset(near,0,sizeof(near));
	near[1]=-1;
	mi = 10000;
	for(i=2;i<=n;i++){
		near[i]=load[1][i];
		if(near[i]<mi){
			mi = near[i];
			mip = i;
		}
	}
	for(i=2;i<=n;i++){
		sum+=mi;
		near[mip]=-1;
		mi = 10000;
		tmip=mip;
		for(j=2;j<=n;j++){
			if(near[j]!=-1 && load[tmip][j]<near[j]){
				near[j]=load[tmip][j];
			}
			if(near[j]!=-1 && near[j]<mi){
				mi=near[j];
				mip=j;
			}
		}
	}
	printf("%d\n",sum);
	return 0;
}