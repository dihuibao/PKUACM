//TLE
#include <iostream>

using namespace std;

int prime[1050000];
int value[1050000];
int tt[32];

int main()
{
	int n,i,j,ma;
	long long a,b;
	prime[0]=prime[1]=0;
	for(i=2;i<1050000;i++){
		prime[i]=1;
	}
	for(i=2;i<1050000;i++){
		if(prime[i]==1){
			for(j=2*i;j<1050000;j+=i){
				prime[j]=0;
			}
		}
	}
	tt[0]=1;
	tt[1]=1;
	for(i=2;i<32;i++){
		tt[i]=tt[i-1]*i;
	}
	while(cin >> n){
		memset(value,0,sizeof(value));
		for(i=2;i<1050000&& n>1;i++){
			if(prime[i]==1){
				while(n%i==0){
					value[i]+=1;
					n/=i;
				}
			}
		}
		ma = i;
		a=0;
		for(i=2;i<ma;i++){
			if(prime[i]==1){
				a+=value[i];
			}
		}
		b=tt[a];
		for(i=2;i<ma;i++){
			if(prime[i]==1){
				b/=tt[value[i]];
			}
		}
		cout << a << " " << b << endl;
	}
	return 0;
}