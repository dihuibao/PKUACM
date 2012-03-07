#include <iostream>

using namespace std;

int main()
{
	int t,i,id,sum;
	double n,a1;
	cin >> t;
	while(t--){
		cin >> id >> n;
		sum=0;
		for(i=2;i<=70000;i++){
			a1=(2.0*n/i-i+1)/2;
			if(a1>0&&a1==int(a1))
				sum++;
			if(a1<=0)
				break;
		}
		cout << id << " " << sum << endl;
	}
	return 0;
}