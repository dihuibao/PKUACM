#include <iostream>

using namespace std;

int n,m,i,j,ns,s;
int used[205];
int link[205];
int mat[205][205];

int can(int t)
{
	int i;
	for(i=1;i<=m;i++){
		if(used[i]==0 && mat[t][i]){
			used[i]=1;
			if(link[i]==-1||can(link[i])){
				link[i]=t;
				return 1;
			}
		}
	}
	return 0;
}

int maxmatch()
{
	int i,num;
	num=0;
	memset(link,0xff,sizeof(link));
	for(i=1;i<=n;i++){
		memset(used,0,sizeof(used));
		if(can(i))
			num++;
	}
	return num;
}

int main()
{
	while(cin >> n >> m){
		memset(mat,0,sizeof(mat));
		for(i=1;i<=n;i++){
			cin >> ns;
			for(j=0;j<ns;j++){
				cin >> s;
				mat[i][s]=1;
			}
		}
		cout << maxmatch() << endl;
	}
	return 0;
}