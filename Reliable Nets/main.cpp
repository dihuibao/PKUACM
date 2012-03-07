//还是有考虑不周到的地方
#include <iostream>

using namespace std;

typedef struct e_s
{
	int a;
	int b;
	int c;
}e_t;

e_t edges[22];
int degree[18],tdegree[18];
int g[18][18],tg[18][18];
int used[18];

int n,m,i,j,t,s,ts,mi,c;

void dfs(int i)
{
	int j;
	for(j=1;j<=n;j++){
		if(g[i][j] && used[j]==0){
			dfs(j);
		}
	}
}

bool isconnected(int g[][18])
{
	int i;
	memset(used,0,sizeof(used));
	dfs(1);
	for(i=1;i<=n;i++){
		if(used[i]==0)
			break;
	}
	if(i==n+1){
		return true;
	}
	else{
		return false;
	}
}

int main()
{
	c=0;
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0 && m==0)
			break;
		c++;
		memset(degree,0,sizeof(degree));
		memset(g,0,sizeof(g));
		s=0;
		for(i=0;i<m;i++){
			scanf("%d %d %d",&edges[i].a,&edges[i].b,&edges[i].c);
			degree[edges[i].a]+=1;
			degree[edges[i].b]+=1;
			s+=edges[i].c;
			g[edges[i].a][edges[i].b]=edges[i].c;
			g[edges[i].a][edges[i].a]=edges[i].c;
		}
		t=(1<<m);
		mi=INT_MAX;
		for(i=0;i<t;i++){
			ts = s;
			memcpy(tdegree,degree,sizeof(degree));
			memcpy(tg,g,sizeof(g));
			for(j=0;j<m;j++){
				if(i & (1 << j)){
					tdegree[edges[j].a]-=1;
					tdegree[edges[j].b]-=1;
					ts-=edges[j].c;
					tg[edges[j].a][edges[j].b]=0;
					tg[edges[j].b][edges[j].a]=0;
				}
			}
			for(j=1;j<=n;j++){
				if(tdegree[j]<=0 || tdegree[j]%2!=0)
					break;
			}
			if(j==n+1 && isconnected(tg)){
				if(ts<mi)
					mi=ts;
			}
		}
		if(mi<INT_MAX)
			printf("The minimal cost for test case %d is %d.\n",c,mi);
		else
			printf("There is no reliable net possible for test case %d.\n",c);
	}
	return 0;
}