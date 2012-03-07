#include <iostream>
#include <string>

using namespace std;

string v[35],s1,s2;
double g[35][35];
int n,i,m,ok,tt=1;
double transfer;

int find(string s)
{
	for(int i=0;i<n;i++){
		if(s==v[i])
			return i;
	}
}

int main()
{
	while(cin >> n){
		if(n==0)
			break;
		for(i=0;i<n;i++){
			cin >> v[i];
		}
		memset(g,0,sizeof(g));
		cin >> m;
		while(m--){
			cin >> s1 >> transfer >>s2;
			g[find(s1)][find(s2)]=transfer;
		}

		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					double temp= g[i][k]*g[k][j];
					if(temp>g[i][j])
						g[i][j]=temp;
				}
			}
		}
		ok=1;
		for(i=0;i<n;i++){
			if(g[i][i]>1){
				ok = 0;
				break;
			}
		}
		if(!ok)
			cout << "Case "<< tt++ << ": Yes" << endl;
		else
			cout << "Case "<< tt++ << ": No" << endl;
	}
	return 0;
}