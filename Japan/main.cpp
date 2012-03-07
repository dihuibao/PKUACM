//WA

#include <iostream>

using namespace std;

typedef struct way_s
{
	int x,y;
}way_t;

way_t ways[1000010];
__int64 c[1005];
int t,i,j,n,m,k;
__int64 s;

int cmp(const void* a,const void* b)
{
	way_t wa = *(way_t*)a;
	way_t wb = *(way_t*)b;
	if(wa.x==wb.x){
		return wb.y-wa.y;
	}
	return wb.x-wa.x;
}

int lowbit(int t)
{
	return t&(t^(t-1));
}

void add(int pos,int num)
{
	while(pos<m){
		c[pos]+=num;
		pos+=lowbit(pos);
	}
}

__int64 sum(int pos)
{
	__int64 res =0;
	while(pos>0){
		res += c[pos];
		pos-=lowbit(pos);
	}
	return res;
}

int main()
{
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		memset(c,0,sizeof(c));
		scanf("%d %d %d",&n,&m,&k);
		s = 0;
		for(j=0;j<k;j++){
			scanf("%d %d",&ways[j].x,&ways[j].y);
		}
		qsort(ways,k,sizeof(way_t),cmp);
		for(j=0;j<k;j++){
			s+=sum(ways[j].y-1);
			add(ways[j].y,1);
		}
		printf("Test case %d: %ld\n",i,s);
	}
	return 0;
}