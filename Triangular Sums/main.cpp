#include <iostream>

using namespace std;

unsigned long long t[305];
unsigned long long w[305];

int main()
{
	int i,j,tt,n;
	t[1]=1;
	for(i=2;i<=301;i++){
		t[i]=t[i-1]+i;
	}
	for(i=1;i<301;i++){
		w[i]=0;
		for(j=1;j<=i;j++){
			w[i]+=j*t[j+1];
		}
	}
	cin >> tt;
	for(i=1;i<=tt;i++){
		cin >> n;
		cout << i << " " << n << " " << w[n] << endl;
	}
	return 0;
}