#include <iostream>

using namespace std;

int groups[105];

int cmp(const void* a, const void* b)
{
	int ia = *(int*)a;
	int ib = *(int*)b;
	return ia-ib;
}

int main()
{
	int n,i,cc=0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> groups[i];
	}
	qsort(groups,n,sizeof(int),cmp);
	for(i=0;i<=n/2;i++){
		cc += groups[i]/2+1;
	}
	cout << cc << endl;
	return 0;
}