//warshall algorithm TLE
//#include <iostream>
//
//using namespace std;
//
//int matrix[1000][1000];
//
//int main()
//{
//	int k,m,i,j,x,y,c,count;
//	while(scanf("%d %d",&k,&m)!=EOF){
//		memset(matrix,0,1000000*sizeof(int));
//		for(i=0;i<m;i++){
//			scanf("%d %d",&x,&y);
//			matrix[x][y]=1;
//		}
//		for(c=0;c<k;c++){
//			for(i=0;i<k;i++){
//				if(matrix[i][c]==1){
//					for(j=0;j<k;j++){
//						matrix[i][j]=matrix[i][j]||matrix[c][j];
//					}
//				}
//			}
//		}
//		count = 0;
//		for(i=0;i<k;i++){
//			for(j=0;j<k;j++){
//				if(matrix[i][j]==1||i==j){
//					count++;
//				}
//			}
//		}
//		cout << count << endl;
//	}
//	return 0;
//}

#include <iostream>
#include <vector>

using namespace std;

int matrix[1000][1000];

int parent[1001];
int k,m,i,j,x,y,c,count;

int find(int i)
{
	if(parent[i]<0)
		return i;
	return parent[i]=find(parent[i]);
}

bool bind(int i,int j)
{
	int pi = find(i);
	int pj = find(j);
	if (pi==pj)
		return false;
	if(parent[pi]<parent[pj]){
		parent[pi]+=parent[pj];
		parent[pj]=pi;
	}
	else{
		parent[pj]+=parent[pi];
		parent[pi]=pj;
	}
	return true;
}

int calc(int n)
{
	return n*(n-1)/2;
}

int main()
{
	while(scanf("%d %d",&k,&m)!=EOF){
		memset(matrix,0,1000000*sizeof(int));
		for(i=0;i<1001;i++){
			parent[i]=-1;
		}
		for(i=0;i<m;i++){
			scanf("%d %d",&x,&y);
			matrix[x][y]=1;
			bind(x,y);
		}

		count = 0;
		for(i=0;i<k;i++){
			if(parent[i]<0){
				count+=calc(-parent[i]);
			}
		}
		count+=k;
		cout << count << endl;
	}
	return 0;
}