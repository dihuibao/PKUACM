#include <iostream>
#include <stack>

using namespace std;

int move[8][2]={{-2,-1},{-2,1},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1}};
int t,tt,p,q,d,ok;
stack<char> st1;
stack<int> st2;

int g[55][55];

void dfs(int x,int y){
	if(x>=1 && x<=p && y>=1 && y<=q && g[x][y]!=1){
		d++;
		g[x][y]=1;
		if(d==p*q){
			ok=1;
			st1.push(char('A'-1+x));
			st2.push(y);
			return;
		}
		for(int i=0;i<8;i++){
			dfs(x+move[i][0],y+move[i][1]);
			if(ok){
				st1.push(char('A'-1+x));
				st2.push(y);
				return;
			}
		}
		d--;
		g[x][y]=0;
	}
	else{
		return;
	}
}

int main()
{
	cin >> t;
	for(tt=1;tt<=t;tt++){
		cin >> q >> p;
		d=0;
		ok=0;
		memset(g,0,sizeof(g));
		dfs(1,1);
		cout << "Scenario #" << tt << ":" << endl;
		if(ok){
			while(!st1.empty()){
				cout << st1.top() << st2.top();
				st1.pop();
				st2.pop();
			}
		}
		else{
			cout << "impossible";
		}
		cout << endl << endl;
	}
	return 0;
}