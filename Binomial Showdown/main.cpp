#include <iostream>

using namespace std;

int main()
{
	int n,k,i,j,t;
	long long res;
	while(scanf("%d %d",&n,&k)){
		if(n==0 && k==0){
			break;
		}
		res=1;
		i=n;
		if(k>n/2){
			j=n-k;
		}
		else{
			j=k;
		}
		t = i-j;
		while(i>t || j>0){
			if(j>0 && res%j==0){
				res/=j--;
			}
			else{
				res*=i--;
			}
		}
		cout << res << endl;
	}
	return 0;
}