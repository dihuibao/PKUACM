#include <iostream>

using namespace std;

int sticks[20];

int cmp(const void* a,const void* b)
{
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ib-ia;
}

int main()
{
	int t,n,i;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0;i<n;i++){
			cin >> sticks[i];
		}
		qsort(sticks,n,sizeof(int),cmp);
	}
	return 0;
}