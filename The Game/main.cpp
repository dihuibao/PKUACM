#include <iostream>
#include <queue>
#include <string>

using namespace std;

typedef struct{
	int x,y,step;
}POINT;

int w,h,i,j,bc,pc,aa,bb,cc,dd,a,b,ok;
string s;
int map[80][80];
int visited[80][80];
queue<POINT> q;

int main()
{
	bc = 1;
	while(cin >> w >> h){
		pc=1;
		if(w==0&&h==0)
			break;
		memset(map,0,sizeof(map));
		getline(cin,s);
		for(i=1;i<=h;i++){
			getline(cin,s);
			for(j=1;j<=w;j++){
				if(s[j-1]=='X')
					map[i][j]=-1;
				else
					map[i][j]=0;
			}
		}
		cout << "Board #" << bc++ <<":" << endl;
		while(cin >> aa >> bb >> cc >> dd){
			if(aa==0&&bb==0&&cc==0&&dd==0)
				break;
			while(!q.empty()){
				q.pop();
			}
			memset(visited,0,sizeof(visited));
			POINT p,pp;
			p.x=bb;
			p.y=aa;
			visited[bb][aa]=1;
			p.step=0;
			q.push(p);
			ok = 0;
			while(!q.empty()){
				p=q.front();
				q.pop();
				a=p.x;
				b=p.y;
				if(a==dd&&b==cc){
					cout <<"Pair "<<pc++<<": "<<p.step << " segments."<<endl;
					ok=1;
					break;
				}
				else{
					if(map[a][b]==-1 && (a!=bb||b!=aa))
						continue;
				}
				i=1;
				while(map[a-i][b]!=-1 && a-i>=0 && visited[a-i][b]==0){
					if(map[a-i][b]==0){
						pp.x=a-i;
						pp.y=b;
						pp.step=p.step+1;
						visited[a-i][b]=1;
						q.push(pp);
					}
					i++;
				}
				if(map[a-i][b]<0 && a-i>=0 && visited[a-i][b]==0){
					pp.x=a-i;
					pp.y=b;
					pp.step=p.step+1;
					visited[a-i][b]=1;
					q.push(pp);
				}
				i=1;
				while(map[a+i][b]!=-1&& a+i<=h+1 && visited[a+i][b]==0){
					if(map[a+i][b]==0){
						pp.x=a+i;
						pp.y=b;
						pp.step=p.step+1;
						visited[a+i][b]=1;
						q.push(pp);
					}
					i++;
				}
				if(map[a+i][b]<0 && a+i<=h+1&& visited[a+i][b]==0){
					pp.x=a+i;
					pp.y=b;
					pp.step=p.step+1;
					visited[a+i][b]=1;
					q.push(pp);
				}
				i=1;
				while(map[a][b-i]!=-1&& b-i>=0&&visited[a][b-i]==0){
					if(map[a][b-i]==0){
						pp.x=a;
						pp.y=b-i;
						pp.step=p.step+1;
						visited[a][b-i]=1;
						q.push(pp);
					}
					i++;
				}
				if(map[a][b-i]<0 && b-i>=0&&visited[a][b-i]==0){
					pp.x=a;
					pp.y=b-i;
					pp.step=p.step+1;
					visited[a][b-i]=1;
					q.push(pp);
				}
				i=1;
				while(map[a][b+i]!=-1&& b+i<=w+1 &&visited[a][b+i]==0){
					if(map[a][b+i]==0){
						pp.x=a;
						pp.y=b+i;
						pp.step=p.step+1;
						visited[a][b+i]=1;
						q.push(pp);
					}
					i++;
				}
				if(map[a][b+i]<0 && b+i<=w+1&&visited[a][b+i]==0){
					pp.x=a;
					pp.y=b+i;
					pp.step=p.step+1;
					visited[a][b+i]=1;
					q.push(pp);
				}
			}
			if(!ok)
				cout <<"Pair "<<pc++<<": "<<"impossible."<<endl;
		}
		cout << endl;
	}
	return 0;
}