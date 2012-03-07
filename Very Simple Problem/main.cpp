#include <iostream>

using namespace std;

int arr[105][105];
int status[105];

int main()
{
	int n,p,i,j,mi,ma,mip,map,f=0;
	scanf("%d %d",&n,&p);
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	memset(status,0,sizeof(status));
	for(i=0;i<n;i++){
		mi=1001,ma=-1;
		for(j=0;j<p;j++){
			if(arr[i][j]>ma){
				ma=arr[i][j];
				map=j;
			}
			if(arr[i][j]<mi){
				mi = arr[i][j];
				mip=j;
			}
		}
		for(j=0;j<p;j++){
			if(arr[i][j]==mi)
				if(status[j+1]!=-1){
					status[j+1]+=1;
				}
			if(arr[i][j]==ma)
				status[j+1]=-1;
		}			
	}
	for(i=1;i<=n;i++){
		if(status[i]!=-1){
			if(status[i]>n/2){
				if(f==0){
					printf("%d",i);
					f=1;
				}
				else{
					printf(" %d",i);
				}
			}
		}
	}
	if(f==0)
		printf("0");
	printf("\n");
	return 0;
}