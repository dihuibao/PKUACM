#include <iostream>

using namespace std;
int tree[1050][1050];
int s,x,y,a,l,b,r,t;

int lowbit(int x)
{
	return x&(x^(x-1));
}

void update(int i,int j,int num)
{
	while(i<=s){
		int temp = j;
		while(temp<=s){
			tree[i][temp]+=num;
			temp+=lowbit(temp);
		}
		i+=lowbit(i);
	}
}

int sum(int i,int j)
{
	int ans=0;
	while(i>0){
		int temp=j;
		while(temp>0){
			ans+=tree[i][temp];
			temp-=lowbit(temp);
		}
		i-=lowbit(i);
	}
	return ans;
}

int main()
{
	int op;
	while(scanf("%d",&op)){
		switch(op){
			case 0:
				scanf("%d",&s);
				break;
			case 1:
				scanf("%d %d %d",&x,&y,&a);
				update(x+1,y+1,a);
				break;
			case 2:
				scanf("%d %d %d %d",&l,&b,&r,&t);
				printf("%d\n",sum(r+1,t+1)+sum(l,b)-sum(l,t+1)-sum(r+1,b));
				break;
			case 3:
				return 0;
				break;
		}
	}
	return 0;
}