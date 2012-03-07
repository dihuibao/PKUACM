#include <iostream>

using namespace std;

int prime[20005];
int data[5005];

int main()
{
	int i,j,n;
	prime[0]=prime[1]=0;
	for(i=2;i<20005;i++){
		prime[i]=1;
	}
	for(i=2;i<20005;i++){
		if(prime[i]==1){
			for(j=2*i;j<20005;j+=i){
				prime[j]=0;
			}
		}
	}
	cin >> n;
	for(i=0;i<n;i++){
		cin >> data[i];
	}
	for(i=20000;i>=2;i--){
		if(prime[i]==1){
			for(j=0;j<n;j++){
				if(data[j]%i==0){
					cout << data[j] << endl;
					return 0;
				}
			}
		}
	}
	cout << 1 << endl;
	return 0;
}