#include <iostream>

using namespace std;



int main()
{
	int n,f;
	while(cin >> n){
		f=1;
		while(n>1){
			if(n%2){
				f=0;
				break;
			}
			else{
				n/=2;
			}
		}
		if(f){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

	}
	return 0;
}