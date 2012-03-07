#include <iostream>

using namespace std;

int parent[100];
int used[100];
int c=1,a,b,i,istree,s,count;

int find(int x)
{
	if(parent[x]<0)
		return x;
	else
		return parent[x]=find(parent[x]);
}

bool bind(int x,int y)
{
	int px = find(x);
	int py = find(y);
	if(px==py)
		return false;
	parent[px]=py;
	return true;
}

int main()
{
	for(i=0;i<100;i++){
		parent[i]=-1;
	}
	memset(used,0,sizeof(int)*100);
	istree=1;
	while(cin>>a>>b){
		if(a==-1&&b==-1)
			break;
		if(a==0&&b==0){
			if(!istree){
				cout << "Case "<<c++<< " is not a tree." << endl;
			}
			else{
				s=0;count=0;
				for(i=0;i<100;i++){
					if(used[i]){
						if(parent[i]==-1)
							s++;
						count++;
					}
				}
				if(s!=1&&s!=count){
					cout << "Case "<<c++<< " is not a tree." << endl;
				}
				else{
					cout << "Case "<<c++<< " is a tree." << endl;
				}
			}
			for(i=0;i<100;i++){
				parent[i]=-1;
			}
			memset(used,0,sizeof(int)*100);
			istree=1;
		}
		else{
			used[a]=used[b]=1;
			if(!istree){
				continue;
			}
			if(!bind(a,b)){
				istree=0;
				continue;
			}
		}
	}
	return 0;
}