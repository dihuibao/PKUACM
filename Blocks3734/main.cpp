#include <iostream>

using namespace std;

int main()
{
	int t,n,i,a,b;
	cin >> t;
	while(t--){
		cin >> n;
		a=1,b=1;
		n--;
		n%=10006;
		for(i=0;i<n;i++){
			a = a*4%10007;
			b = b*2%10007;
		}
		cout << (a+b)%10007 << endl;
	}
	return 0;
}