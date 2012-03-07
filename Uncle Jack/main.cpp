#include <stdio.h>
#include <math.h>

__int64 pown(__int64 base,__int64 n)
{
	if(n==0)
		return 1;
	if(n==1)
		return base;
	if(n%2==0)
		return pown(base*base,n/2);
	else 
		return pown(base*base,n/2)*base;
}

int main()
{
	int N,D;
	int base=1000000000;
	double maxn=pow(2.0,62.5);
	while(scanf("%d%d",&N,&D)&&(N!=0||D!=0)){
		double max=pown(N,D);
		if(max<=maxn){
			printf("%I64d\n",pown(N,D));
			continue;
		}
		__int64 a1 = pown(N, D / 2);
        __int64 a2 = pown(N, D - D / 2);
        __int64 a1h = a1 / base, a1l = a1 % base;
        __int64 a2h = a2 / base, a2l = a2 % base;
        __int64 low = a1l * a2l;
        __int64 hih = a1h * a2h * base + a1h * a2l + a2h * a1l + low / base; 
        printf("%I64d", hih);
        printf("%09I64d\n", low % base); 
	}
	return 0;
}