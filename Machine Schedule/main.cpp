#include <iostream>

using namespace std;

int g[105][105];
int used[105],my[105];
int n,m,k,i,a,x,y;

bool find(int ni)
{
	int i;
	for(i=1;i<m;i++){
		if(!used[i] && g[ni][i]){
			used[i]=1;
			if(my[i]==-1 || find(my[i])){
				my[i]=ni;
				return 1;
			}
		}
	}
	return 0;
}

int mmg()
{
	int ans=0;
	int i;
	memset(my,-1,sizeof(my));
	for(i=1;i<n;i++){
		memset(used,0,sizeof(used));
		if(find(i))
			ans++;
	}
	return ans;
}

int main()
{
	while(1){
		scanf("%d",&n);
		if(n==0)
			break;
		memset(g,0,sizeof(g));
		scanf("%d %d",&m,&k);
		for(i=0;i<k;i++){
			scanf("%d %d %d",&a,&x,&y);
			g[x][y]=1;
		}
		printf("%d\n",mmg());
	}
	return 0;
}