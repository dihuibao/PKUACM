#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int b,n,a;
	while(cin >> b >> n){
		if(b==0 && n==0)
			break;
		a = (int)pow(b*1.0,(double)1/n);
		if(b-(int)pow(a*1.0,n*1.0)<(int)pow((a+1)*1.0,n*1.0)-b){
			cout << a << endl;
		}
		else{
			cout << a+1 << endl;
		}
	}
	return 0;
}