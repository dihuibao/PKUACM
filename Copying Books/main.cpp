#include <iostream>

using namespace std;

int arr[505];
int tag[505];

int main()
{
	int t,m,k,i,j,ma,sum,mid,tp;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d", &m, &k);
		memset(tag,0,sizeof(tag));
		sum=0,ma=0;
		for(i=0;i<m;i++){
			scanf("%d",&arr[i]);
			if(arr[i]>ma)
				ma=arr[i];
			sum+=arr[i];
		}
		do{
			mid=(ma+sum)/2;
			j=0;
			for(i=0;i<k;i++){
				tp=0;
				while(j<m && tp+arr[j]<=mid){
					tp+=arr[j++];
				}
			}
			if(j==m){
				sum=mid-1;
			}
			else{
				ma=mid+1;
			}
		}while(ma<=sum);
		j=m-1;
		for(i=0;i<k;i++){
			tp=0;
			while(j>=0 && tp+arr[j]<=ma){
				tp+=arr[j--];
			}
			if(j>=0)
				tag[j]=1;
			else{
				break;
			}
		}
		j=0;
		i++;
		while(i<k){
			while(tag[j])j++;
			tag[j]=1;
			i++;
		}
		for(i=0;i<m;i++){
			printf("%d ",arr[i]);
			if(tag[i])
				printf("/ ");
		}
		printf("\n");
	}
	return 0;
}