#include <iostream>

using namespace std;

int parent[100005];
int gang[100005];
int t,n,m,a,b,i;
char op;

int find(int x)
{
	int t= parent[x];
	if(t<0)
		return x;
	parent[x]=find(t);
	gang[x]=(gang[x]+gang[t])%2;
	return parent[x];
}

void bind(int x,int y,char op)
{
	int px = find(x);
	int py = find(y);
	if(op=='A'){
		if(px!=py)
			printf("Not sure yet.\n");
		else{
			if(gang[x]==gang[y])
				printf("In the same gang.\n");
			else
				printf("In different gangs.\n");
		}
	}
	else{
		if(px!=py){
			parent[px]=py;
			gang[px]=(gang[x]+gang[y]+1)%2;
		}
	}
}

int main()
{
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++){
			parent[i] = -1;
			gang[i] = 0;
		}
		while(m--){
			getchar();
			scanf("%c%d%d",&op,&a,&b);
			bind(a,b,op);
		}
	}
	return 0;
}