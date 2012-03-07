#include <iostream>

using namespace std;

typedef struct line_s{
	int s;
	int e;
	int id;
}line_t;

line_t ls[100050];

int cn[100050];
int out[100050];

int lowbit(int i)
{
	return i&(i^(i-1));
}

void add(int x,int k)
{
	while(x<100050){
		cn[x]++;
		x=x+lowbit(x);
	}
}

int sum(int x)
{
	int ans=0;
	while(x>0){
		ans+=cn[x];
		x=x-lowbit(x);
	}
	return ans;
}

int cmp(const void* a,const void* b)
{
	line_t l1 = *(line_t*)a;
	line_t l2 = *(line_t*)b;
	if(l1.s==l2.s){
		return l2.e-l1.e;
	}
	return l1.s-l2.s;
}

int main()
{
	int n,i,j;
	while(scanf("%d",&n)){
		if(n==0)
			break;
		memset(cn,0,sizeof(int)*100050);
		memset(out,0,sizeof(line_t)*100050);
		for(i=0;i<n;i++){
			scanf("%d %d",&ls[i].s,&ls[i].e);
			ls[i].id=i;
		}
		qsort(ls,n,sizeof(line_t),cmp);
		for(i=0;i<n;i++){
			add(ls[i].e,1);
			out[ls[i].id]=i-sum(ls[i].e-1);
			for(j=i-1;j>=0;j--){
				if(ls[j].s==ls[i].s && ls[j].e==ls[i].e)
					out[ls[i].id]--;
				else
					break;
			}
		}
		for(i=0;i<n;i++){
			printf("%d",out[i]);
			if(i!=n-1)
				printf(" ");
			else
				printf("\n");
		}
	}
	return 0;
}