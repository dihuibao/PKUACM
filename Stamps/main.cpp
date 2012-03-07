#include <iostream>

using namespace std;

int friends[1005];

int cmp(const void * a, const void *b)
{
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ib-ia;
}

int main()
{
	int t,i,j,total,n,sum;
	cin >> t;
	for(i=1;i<=t;i++){
		cin >> total >> n;
		for(j=0;j<n;j++){
			cin >> friends[j];
		}
		qsort(friends,n,sizeof(int),cmp);
		sum =0;
		for(j=0;j<n;j++){
			sum+=friends[j];
			if(sum>=total)
				break;
		}
		cout << "Scenario #" << i << ":" << endl;
		if(j>=n){
			cout << "impossible" << endl;
		}
		else{
			cout << j+1 << endl;
		}
		cout << endl;
	}
	return 0;
}