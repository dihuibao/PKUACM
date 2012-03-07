#include <iostream>

using namespace std;

int c[10005];

int main()
{
	int n,k,i,e,t,m;
	cin >> n >> k;
	memset(c,0,sizeof(c));
	t=0;
	m=1;
	for(int i=0;i<n;i++){
		cin >> e;
		if(c[e]==0){
			c[e]=1;
			t++;
		}
		if(t==k){
			t=0;
			m++;
			memset(c,0,sizeof(c));
		}

	}
	cout << m<< endl;
	return 0;
}