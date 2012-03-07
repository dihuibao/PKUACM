#include <iostream>

using namespace std;

int main()
{
	int c,l,n,i,d,mi,ma;
	cin >> c;
	while(c--){
		cin >> l >> n;
		mi=0, ma=0;
		for(i=0;i<n;i++){
			cin >> d;
			if(d<l/2){
				if(d>mi)
					mi=d;
				if(l-d>ma)
					ma=l-d;
			}
			else{
				if(l-d>mi)
					mi=l-d;
				if(d>ma)
					ma=d;
			}
		}
		cout << mi << " " << ma << endl;
	}
	return 0;
}