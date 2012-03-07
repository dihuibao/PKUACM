#include <iostream>

using namespace std;

int cows[20005];

int cmp(const void* a,const void* b)
{
	int ia = *(int*)a;
	int ib = *(int*)b;
	return ib-ia;
}

int main()
{
	int n,b,i,r=0,c=0;
	cin >> n >> b;
	for(i=0;i<n;i++){
		cin >> cows[i];
	}
	qsort(cows,n,sizeof(int),cmp);
	i=0;
	while(r<b){
		r+=cows[i];
		c++;
		i++;
	}
	cout << c << endl;
	return 0;
}