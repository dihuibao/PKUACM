#include <iostream>

using namespace std;

int n1,n2,n,i,t,ii;
long long sum;

int n1n[10];
int n2n[10];

int main()
{
	while(cin >> n2 >> n1 >> n){
		if(n1==0 && n2==0 && n==0)
			break;
		for(i=0;i<10;i++){
			n1n[i]=INT_MAX;
			n2n[i]=0;
		}
		sum=0;
		for(i=0;i<n;i++){
			scanf("%d",&t);
			if(t<n1n[n1-1]){
				ii=n1-2;
				while(t<n1n[ii]&&ii>=0){
					n1n[ii+1]=n1n[ii];
					ii--;
				}
				n1n[ii+1]=t;
			}
			if(t>n2n[n2-1]){
				ii=n2-2;
				while(t>n2n[ii]&&ii>=0){
					n2n[ii+1]=n2n[ii];
					ii--;
				}
				n2n[ii+1]=t;
			}
			sum += t;	
		}
		for(i=0;i<n1;i++){
			sum -= n1n[i];
		}
		for(i=0;i<n2;i++){
			sum -= n2n[i];
		}
		printf("%.6f\n",sum*1.0/(n-n1-n2));
	}
	return 0;
}