#include <iostream>

int main()
{
	int n,m,i,j;
	while(scanf("%d",&n)!=EOF && n!=0){
		m=1;
		while(1){
			i=0;
			j=n-1;
			while(j!=0){
				i=(i+m-1)%j;
				j--;
				if(i==0)
					break;
			}
			if(j==0){
				printf("%d\n",m);
				break;
			}
			m++;
		}
	}
}