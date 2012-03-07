#include <iostream>

using namespace std;

int parent[2005];
int gender[2005];
int t,n,m,a,b,i,ok,tt=1;

int find(int x)
{
	int t = parent[x];
	if(t<0)
		return x;
	parent[x]=find(t);
	gender[x]=(gender[x]+gender[t])%2;
	return parent[x];
}

void bind(int x,int y)
{
	int px = find(x);
	int py = find(y);
	if(px==py){
		if(gender[x]==gender[y]){
			ok=0;
		}
	}
	else{
		parent[px]=py;
		gender[px]=(gender[x]+gender[y]+1)%2;
	}
}

int main()
{
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++){
			parent[i]=-1;
			gender[i]=0;
		}
		ok = 1;
		while(m--){
			scanf("%d%d",&a,&b);
			if(ok){
				bind(a,b);
			}
		}
		if(ok){
			printf("Scenario #%d:\nNo suspicious bugs found!\n\n",tt++);
		}
		else{
			printf("Scenario #%d:\nSuspicious bugs found!\n\n",tt++);
		}
	}
	return 0;
}