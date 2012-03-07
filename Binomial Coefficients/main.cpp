#include <iostream>

using namespace std;

int main()
{
	int c,k,m,cc,ck,cm;
	while(cin >> c >> k){
		cc=ck=cm=0;
		m = c-k;
		while(c=c>>1)
			cc+=c;
		while(k=k>>1)
			ck+=k;
		while(m=m>>1)
			cm+=m;
		if(cc>ck+cm)
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}