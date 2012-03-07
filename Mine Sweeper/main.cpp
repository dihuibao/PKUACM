#include <iostream>
#include <string>

using namespace std;

int n,i,j,count,f;
string line;
int g[15][15];
int m[15][15];

int main()
{
	cin >> n;
	for(i=0;i<n;i++){
		cin >> line;
		for(j=0;j<n;j++){
			if(line[j]=='.')
				g[i][j]=0;
			else
				g[i][j]=10;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(g[i][j]!=10){
				count=0;
				if(i-1>=0 && g[i-1][j]==10)
					count++;
				if(i+1<=n-1 && g[i+1][j]==10)
					count++;
				if(j-1>=0 && g[i][j-1]==10)
					count++;
				if(j+1<=n-1 && g[i][j+1]==10)
					count++;
				if(i-1>=0 && j-1>=0 && g[i-1][j-1]==10)
					count++;
				if(i+1<=n-1 && j+1<=n-1 && g[i+1][j+1]==10)
					count++;
				if(i-1>=0 && j+1<=n-1 && g[i-1][j+1]==10)
					count++;
				if(i+1<=n-1 && j-1>=0 && g[i+1][j-1]==10)
					count++;
				g[i][j]=count;
			}
		}
	}
	f=0;
	for(i=0;i<n;i++){
		cin >> line;
		for(j=0;j<n;j++){
			if(line[j]=='x'){
				m[i][j]=1;
				if(g[i][j]==10)
					f=1;
			}
			else{
				m[i][j]=0;
			}
		}
	}
	if(f){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(g[i][j]==10){
					cout << "*";
				}
				else if(g[i][j]!=10 && m[i][j]==1){
					cout << g[i][j];
				}
				else{
					cout << ".";
				}
			}
			cout << endl;
		}
	}
	else{
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(m[i][j]==1){
					cout << g[i][j];
				}
				else{
					cout<<".";
				}
			}
			cout << endl;
		}
	}
	return 0;
}