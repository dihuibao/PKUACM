#include <iostream>

using namespace std;

int cows[20002];

int cmp(const void * a,const void * b)
{
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ib-ia;
}

int main()
{
	int n,s,i,j,sum;
	cin >> n >> s;
	for(i=0;i<n;i++){
		scanf("%d",&cows[i]);
	}
	qsort(cows,n,sizeof(int),cmp);
	sum = 0;
	for(i=0;i<n;i++){
		j=i+1;
		while(j<n && cows[i]+cows[j]>s){
			j++;
		}
		sum += n-j;
	}
	cout << sum << endl;
	return 0;
}