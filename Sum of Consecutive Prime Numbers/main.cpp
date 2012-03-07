#include <iostream>

using namespace std;

int prime[10001];

int main()
{
	int i,j,sum,c,n;
	memset(prime,1,sizeof(int)*10001);
	prime[0]=prime[1]=0;
	for(i=2;i<=100;i++){
		if(prime[i]==0)
			continue;
		for(j=i+1;j<=10000;j++){
			if(j%i==0){
				prime[j]=0;
			}
		}
	}
	while(cin >> n){
		if(n==0)
			break;
		sum = 0;c=0;
		for(i=2,j=2;i<=n+1,j<=n+1;){
			if(sum==n){
				c++;
				sum += j++;
				while(prime[j]==0 && j<=n){
					j++;
				}
				sum -= i++;
				while(prime[i]==0 && i<=n){
					i++;
				}
			}
			else if(sum<n){
				sum+=j++;
				while(prime[j]==0 && j<=n){
					j++;
				}
			}
			else{
				sum -= i++;
				while(prime[i]==0 && i<=n){
					i++;
				}
			}
		}
		cout << c << endl;
	}
	return 0;
}