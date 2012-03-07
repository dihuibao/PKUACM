#include <iostream>

using namespace std;

int data[105];

int main()
{
	int t,n,m,i,c,mp,mi,idx;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		for(i=0;i<n;i++){
			scanf("%d",&data[i]);
		}
		c=0;
		idx=0;
		while(data[m]){
			mi=0;
			for(i=idx;i<idx+n;i++){
				if(data[i%n]>mi){
					mi=data[i%n];
					mp=i%n;
				}
			}
			c++;
			if(m==mp){
				break;
			}
			data[mp]=0;
			idx=mp+1;
		}
		printf("%d\n",c);
	}
	return 0;
}