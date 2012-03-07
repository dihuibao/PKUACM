#include <iostream>

using namespace std;

int g[26][26];
char in[5];
int m,n,i,j,k,a,b,f,s;

int degree(int t)
{
	int i,degree=0;
	for(i=0;i<m;i++){
		if(g[t][i])
			degree++;
		if(g[i][t])
			degree++;
	}
	return degree;
}

int indegree(int t)
{
	int i,degree=0;
	for(i=0;i<m;i++){
		if(g[i][t])
			degree++;
	}
	return degree;
}

int main()
{
	while(1){
		scanf("%d %d\n",&m,&n);
		if(m==0 && n==0)
			break;
		memset(g,0,sizeof(g));
		f=s=0;
		for(k=0;k<n;k++){
			gets(in);
			if(f==0 && s==0 ){
				a=in[0]-'A';
				b=in[2]-'A';
				g[a][b]=1;
				for(i=0;i<m;i++){
					for(j=0;j<m;j++){
						if(i!=a && b!=j)
							g[i][j]=g[i][j]||(g[i][a]&&g[b][j]);
						else if(i==a && b!=j)
							g[i][j]=g[i][j]||g[b][j];
						else if(i!=a && b==j)
							g[i][j]=g[i][j]||g[i][a];
					}
				}
				for(i=0;i<m;i++){
					if(g[i][i]==1){
						f=k+1;
						break;
					}
				}
				for(i=0;i<m;i++){
					if(degree(i)!=m-1){
						break;
					}
				}
				if(s==0 && i==m){
					s=k+1;
				}
			}
		}
		if(f){
			printf("Inconsistency found after %d relations.\n",f);
		}
		else if(s==0){
			printf("Sorted sequence cannot be determined.\n");
		}
		else if(s){
			printf("Sorted sequence determined after %d relations: ",s);
			for(i=0;i<m;i++){
				for(j=0;j<m;j++){
					if(indegree(j)==i){
						printf("%c",char(j+'A'));
					}
				}
			}
			printf(".\n");
		}
	}
	return 0;
}