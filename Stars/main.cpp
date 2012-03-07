#include <iostream>

using namespace std;

int cn[32005];
int out[32005];
int time[32005];

int lowbit(int i)
{
	return i&(i^(i-1));
}

void add(int x,int k)
{
	while(x<32005){
		cn[x]+=k;
		x+=lowbit(x);
	}
}

int sum(int x)
{
	int ans=0;
	while(x>0){
		ans+=cn[x];
		x-=lowbit(x);
	}
	return ans;
}

int main()
{
	int n,i,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		add(x+1,1);
		out[sum(x)+time[x]++]++;
	}
	for(i=0;i<n;i++){
		cout << out[i] << endl;
	}
	return 0;
}