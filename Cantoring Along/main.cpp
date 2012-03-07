#include <iostream>

using namespace std;

char g[555555];
int order3[]={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441};
int n,i,s;

int main()
{
	memset(g,' ',sizeof(char)*555555);
	g[0]='-';
	for(i=0;i<12;i++){
		s = order3[i];
		memcpy(g+2*s,g,sizeof(char)*s);
	}
	while(scanf("%d",&n)!=EOF){
		s = order3[n];
		g[s]='\0';
		printf("%s\n",g);
		g[s]=' ';
	}
	return 0;
}