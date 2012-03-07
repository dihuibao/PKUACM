#include <iostream>

using namespace std;

long long dp[12][2050];
int h,w,i,j,statenum;

void dfs(int pos,int state)
{
	if(pos==w+1){
		dp[i+1][state]+=dp[i][j];
		return;
	}
	if((j>>(pos-1)&1)==1){
		dfs(pos+1,state);
	}
	else{
		if(pos+1<=w&&(j>>pos&1)==0){
			dfs(pos+2,state);
		}
		dfs(pos+1,state|(1<<(pos-1)));
	}

}

int main()
{
	while(cin>>h>>w){
		if(h==0&&w==0){
			break;
		}
		if(h*w%2){
			cout << 0 << endl;
			continue;
		}
		memset(dp,0,sizeof(dp));
		dp[0][0]=1;
		statenum = 1 << w;
		for(i=0;i<h;i++){
			for(j=0;j<statenum;j++){
				if(dp[i][j]){
					dfs(1,0);
				}
			}
		}
		cout << dp[h][0] << endl;
	}
	return 0;
}