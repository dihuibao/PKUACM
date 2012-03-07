#include <iostream>

using namespace std;

char s[10000001];
int next[1000001];
int i,j,l,k;

int main()
{
	while(scanf("%s",s)){
		if(strcmp(s,".")==0)
			break;
		l = strlen(s);
		i=0;j=-1;
		next[0]=-1;
		while(i<l){
			if(j==-1 || s[i]==s[j]){
				i++;j++;
				next[i]=j;
			}
			else{
				j=next[j];
			}
		}
		if(l%(j=l-next[l])==0){
			k=i/j;
		}
		else{
			k=1;
		}
		printf("%d\n",k);
	}
	return 0;
}