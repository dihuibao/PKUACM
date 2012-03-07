#include <iostream>

using namespace std;

int mi,ma;

int main()
{
	int t,n,i,s;
	scanf("%d",&t);
	while(t--){
		mi=INT_MAX;
		ma=0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&s);
			if(s<mi)
				mi=s;
			if(s>ma)
				ma=s;
		}
		printf("%d\n",(ma-mi)*2);
	}
	return 0;
}