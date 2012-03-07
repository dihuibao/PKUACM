#include <iostream>

using namespace std;

int main()
{
	int t,a,b,c,d,i;
	cin >> t;
	for(i=1;i<=t;i++){
		cout << "Scenario #" << i << ":" << endl;
		cin >> a >> b >> c >> d;
		if((a+b+c+d)%2==0){
			cout << 0 << endl << endl;
		}
		else{
			cout << 1 << endl << endl;
		}
	}
	return 0;
}