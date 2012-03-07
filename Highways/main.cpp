#include <iostream>

using namespace std;

int t,n,i,j,mi,midx,dma,lmidx;
int m[505][505];
int sh[505];

int main()
{
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				scanf("%d",&m[i][j]);
			}
		}
		mi = 70000;
		dma =0;
		for(i=0;i<n;i++){
			sh[i]=m[0][i];
			if(sh[i] && sh[i]<mi){
				mi=sh[i];
				midx=i;
			}
		}
		for(i=0;i<n-1;i++){
			mi=70000;
			if(sh[midx]>dma){
				dma=sh[midx];
			}
			sh[midx]=0;
			lmidx=midx;
			for(j=0;j<n;j++){
				if(sh[j] && m[lmidx][j]<sh[j]){
					sh[j]=m[lmidx][j];
				}
				if(sh[j] && sh[j]<mi){
					mi=sh[j];
					midx=j;
				}
			}
		}
		printf("%d\n",dma);
	}
	return 0;
}