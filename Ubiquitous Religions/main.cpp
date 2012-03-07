#include <iostream>

using namespace std;

int parent[50001];

int find(int a)
{
	if(parent[a]<0)
		return a;
	return parent[a]=find(parent[a]);
}

void bind(int a,int b)
{
	int pa = find(a);
	int pb = find(b);
	if(pa==pb)
		return;
	parent[pa]=pb;
	return;
}

int main()
{
	int i,k=1,n,m,a,b,c;
	while(cin >> n >> m){
		if(n==0 && m==0)
			break;
		c=0;
		for(i=0;i<50001;i++){
			parent[i]=-1;
		}
		for(i=0;i<m;i++){
			scanf("%d%d",&a,&b);
			bind(a,b);
		}
		for(i=1;i<=n;i++){
			if(parent[i]<0){
				c++;
			}
		}
		cout << "Case " << k++ << ": " << c << endl;
	}
	return 0;
}