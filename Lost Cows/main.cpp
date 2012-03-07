#include <iostream>

using namespace std;

int cows[8002];
int used[8002];

int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<n;i++){
		scanf("%d",&cows[i]);
		used[i]=1;
	}
	used[0]=1;
	for(i=n-1;i>0;i--){
		for(j=0;j<n;j++){
			if(used[j]){
				cows[i]--;
			}
			if(cows[i]==-1){
				cows[i]=j+1;
				used[j]=0;
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		if(used[i]){
			cout << i+1 << endl;
			break;
		}
	}
	for(i=1;i<n;i++){
		printf("%d\n",cows[i]);
	}
	return 0;
}