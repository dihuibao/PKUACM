#include <iostream>
#include <string>

using namespace std;

int map[101][11];
int n,m,i,j;
string s;

int main()
{
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin >> s;
		for(j=0;j<m;j++){
			if(s[j]=='P'){
				map[i][j]=1;
			}
			else{
				map[i][j]=0;
			}
		}
	}
	return 0;
}