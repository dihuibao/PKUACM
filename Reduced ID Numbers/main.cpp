#include <iostream>

using namespace std;

bool v[1000005];
int data[305];

int main()
{
	int t,n,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		memset(v,0,sizeof(bool)*1000005);
		for(j=n;j<1000000;j++){
			memset(v,0,sizeof(bool)*j);
			for(i=0;i<n;i++){
				if(v[data[i]%j]==true)
					break;
				else
					v[data[i]%j]=true;
			}
			if(i==n){
				printf("%d\n",j);
				break;
			}
		}
	}
	return 0;
}