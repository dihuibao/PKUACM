#include <iostream>
#include <string>

using namespace std;

int num[100005];

int cmp(const void*a, const void*b)
{
	int ia=*(int *)a;
	int ib=*(int *)b;
	return ia-ib;
}
int main()
{
	int t,i,rank;
	string s;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> num[i];
	}
	qsort(num,t,sizeof(int),cmp);
	cin >> s;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> rank;
		cout << num[rank-1] << endl;
	}
	return 0;
}