#include <iostream>

using namespace std;

int prime[10005];
int i,j,n;

long long sum=1;

int main()
{
	memset(prime,0,sizeof(int)*10005);
	prime[0]=prime[1]=-1;
	for(i=2;i<100;i++){
		for(j=i+i;j<10005;j+=i){
			prime[j]=-1;
		}
	}
	for(i=0;i<10;i++){
		cin >> n;
		for(j=2;j<10005;j++){
			if(prime[j]>=0){
				while(n%j==0){
					n/=j;
					prime[j]++;
				}
			}
		}
	}
	for(i=2;i<10005;i++){
		if(prime[i]>0){
			sum*=(prime[i]+1);
		}
	}
	cout << sum%10 << endl;
	return 0;
}