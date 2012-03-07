#include <iostream>

using namespace std;

int main()
{
	int n,i,mi,ma,sum,a;
	while(cin >> n){
		if(n==0)
			break;
		mi = 1000,ma= 0;
		sum = 0;
		for(i=0;i<n;i++){
			scanf("%d",&a);
			if(a<mi)
				mi = a;
			if(a>ma)
				ma = a;
			sum += a;
		}
		cout << (sum-mi-ma)/(n-2) << endl;
	}
	return 0;
}