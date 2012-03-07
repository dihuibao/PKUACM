#include <iostream>

using namespace std;

int notprime[1000005];

int main()
{
	int i,j,a,d,n,count;
	memset(notprime,0,sizeof(int)*1000005);
	notprime[0]=notprime[1]=1;
	for(i=2;i<1000005;i++){
		if(notprime[i]==0){
			for(j=2*i;j<1000005;j+=i){
				notprime[j]=1;
			}
		}
	}
	while(cin >> a >> d >> n){
		if(a==0 && d==0 && n==0)
			break;
		count=0;
		for(i=a;count<n;i+=d){
			if(notprime[i]==0)
				count++;
		}
		cout << i-d << endl;
	}
	
	return 0;
}