#include <iostream>

using namespace std;

unsigned int num[250000];

int cmp(const void * a, const void *b)
{
	unsigned int ia = *(unsigned int*)a;
	unsigned int ib = *(unsigned int*)b;
	return ia - ib;
}

int main()
{
	int n,i;
	scanf("%u",&n);
	for(i=0;i<n;i++){
		scanf("%u",&num[i]);
	}
	qsort(num,n,sizeof(unsigned int),cmp);
	if(n%2==0){
		double d= (num[n/2-1]*1.0+num[n/2]*1.0)/2;
		printf("%.1f\n",d);
	}
	else{
		printf("%.1f\n",num[(n-1)/2]*1.0);
	}
	return 0;
}