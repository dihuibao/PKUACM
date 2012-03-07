#include <iostream>

using namespace std;

int main()
{
	int t,n,l,w,h,mi;
	cin >> t;
	while(t--){
		cin >> n;
		mi=INT_MAX;
		for(l=1;l<=n;l++){
			for(w=l;w*l<=n;w++){
				if(n%(w*l)==0){
					h=n/w/l;
					if(2*(l*w+w*h+h*l)<mi){
						mi= 2*(l*w+w*h+h*l);
					}
				}
			}
		}
		cout << mi << endl;
	}
	return 0;
}