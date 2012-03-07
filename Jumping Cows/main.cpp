#include <iostream>

using namespace std;

int main()
{
	int t,sum=0,i,r=0,n,f=0;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> n;
		if(!f){
			if(n>r){
				r=n;
				continue;
			}
			sum +=r;
			r = n;
			f=1;
		}
		else{
			if(n<r){
				r=n;
				continue;
			}
			sum -= r;
			r = n;
			f = 0;
		}
	}
	if(!f){
		sum += r;
	}
	cout << sum << endl;
	return 0;
}