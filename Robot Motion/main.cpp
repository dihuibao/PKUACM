#include <iostream>
#include <string>

using namespace std;

char m[11][11];
int p[11][11];

int main()
{
	int r,c,s,i,j,step,loop;
	string str;
	while(cin>>r>>c>>s){
		if(r==0&&c==0&&s==0){
			break;
		}
		for(i=1;i<=r;i++){
			cin >> str;
			for(j=1;j<=c;j++){
				m[i][j]=str[j-1];
				p[i][j]=0;
			}
		}
		i=1;j=s;
		step=0;loop=0;
		do{
			if(p[i][j]==0)
				p[i][j]=++step;
			else{
				loop=step+1-p[i][j];
				break;
			}
			if(m[i][j]=='N'){
				i--;
			}
			else if(m[i][j]=='S'){
				i++;
			}
			else if(m[i][j]=='E'){
				j++;
			}
			else if(m[i][j]=='W'){
				j--;
			}
		}while(i>=1 && i<=r && j>=1 && j<=c);
		if(loop==0){
			cout << step << " step(s) to exit" << endl;
		}
		else{
			cout << step-loop << " step(s) before a loop of " << loop << " step(s)" << endl;
		}
	}
	return 0;
}