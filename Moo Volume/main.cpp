#include <iostream>

using namespace std;

int a[10005];

int cmp(const void * a,const void * b)
{
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ia-ib;
}

int main()
{
	int n,i;
	long long dist=0,sum;
	cin >> n;
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	qsort(a,n,sizeof(int),cmp);
	for(i=1;i<n;i++){
		dist+=a[i]-a[0];
	}
	sum = dist;
	for(i=1;i<n;i++){
		dist+=(2*i-n)*(a[i]-a[i-1]);
		sum+=dist;
	}
	cout << sum << endl;
	return 0;
}