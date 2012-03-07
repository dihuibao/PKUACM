#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,a,b,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&a,&b);
		printf("Scenario #%d:\n",i);
		if(a%2==1 && b%2==1){
			printf("%.2f\n\n",a*b*1.0+sqrt(2.0)-1.0);
		}
		else{
			printf("%.2f\n\n",a*b*1.0);
		}
	}
	return 0;
}