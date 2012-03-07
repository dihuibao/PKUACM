#include <iostream>

using namespace std;

int price[20005];

int cmp(const void * a,const void * b )
{
	int ia = *(int*)a;
	int ib = *(int*)b;
	return ib-ia;
}

int main()
{
	int t,n,i,sum;
	cin >> t;
	while(t--){
		sum = 0;
		cin >> n;
		for(i=0;i<n;i++){
			cin >> price[i];
		}
		qsort(price,n,sizeof(int),cmp);
		for(i=0;i<n;i++){
			if(i%3==2){
				sum+=price[i];
			}
		}
		cout << sum << endl;
	}
	return 0;
}