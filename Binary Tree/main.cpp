#include <iostream>

using namespace std;

int main()
{
	int t,i,a,b,r,l;
	cin >> t;
	for(i=1;i<=t;i++){
		cin >> a >> b;
		cout << "Scenario #" << i << ":" << endl;
		r=l=0;
		while(a!=b){
			if(a>b){
				if(b==1){
					l+=a-1;
					a=1;
				}
				else{
					l+=a/b;
					a=a%b;
				}
			}
			else{
				if(a==1){
					r+=b-1;
					b=1;
				}
				else{
					r+=b/a;
					b=b%a;
				}
			}
		}
		cout << l << " " << r << endl << endl;
	}
	return 0;
}