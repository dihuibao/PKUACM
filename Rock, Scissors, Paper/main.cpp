#include <iostream>

using namespace std;

int t,r,c,d,i,j,k;
char g[105][105];
char rg[105][105];

int main()
{
	cin >> t;
	while(t--){
		cin >> r >> c >> d;
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cin >> rg[i][j];
			}
		}
		for(k=0;k<d;k++){
			memcpy(g,rg,sizeof(char)*105*105);
			for(i=0;i<r;i++){
				for(j=0;j<c;j++){
					switch(g[i][j]){
						case 'R':
							if(i-1>=0 && g[i-1][j]=='P'){
								rg[i][j]='P';
								break;
							}
							if(i+1<=r && g[i+1][j]=='P'){
								rg[i][j]='P';
								break;
							}
							if(j-1>=0 && g[i][j-1]=='P'){
								rg[i][j]='P';
								break;
							}
							if(j+1<=c && g[i][j+1]=='P'){
								rg[i][j]='P';
								break;
							}
							break;
						case 'S':
							if(i-1>=0 && g[i-1][j]=='R'){
								rg[i][j]='R';
								break;
							}
							if(i+1<=r && g[i+1][j]=='R'){
								rg[i][j]='R';
								break;
							}
							if(j-1>=0 && g[i][j-1]=='R'){
								rg[i][j]='R';
								break;
							}
							if(j+1<=c && g[i][j+1]=='R'){
								rg[i][j]='R';
								break;
							}
							break;
						case 'P':
							if(i-1>=0 && g[i-1][j]=='S'){
								rg[i][j]='S';
								break;
							}
							if(i+1<=r && g[i+1][j]=='S'){
								rg[i][j]='S';
								break;
							}
							if(j-1>=0 && g[i][j-1]=='S'){
								rg[i][j]='S';
								break;
							}
							if(j+1<=c && g[i][j+1]=='S'){
								rg[i][j]='S';
								break;
							}
							break;
					}
				}
			}
		}
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				cout << rg[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}