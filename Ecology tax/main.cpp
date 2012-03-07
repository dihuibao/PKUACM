#include <iostream>

using namespace std;

int tree[30005];

int main()
{
	int n,l,i,j,mi,sum,my;
	while(cin >> n >> l){
		mi = INT_MAX;
		for(i=0;i<n;i++){
			cin >> tree[i];
		}
		for(i=0;i<l;i++){
			sum=0;
			for(j=0;j<n;j++){
				sum += (tree[j]+i)%l;
			}
			if(sum<mi){
				mi=sum;
				my=i;
			}
		}
		cout << my << endl;
	}
	return 0;
}