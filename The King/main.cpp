#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,e,i,p,s,r;
	cin >> n;
	cin >> e;
	s = 0;
	for(i=0;i<n;i++){
		cin >> p;
		r = pow(p*1.0,e*1.0);
		if(r>0){
			s+=r;
		}
	}
	cout << s << endl;
	return 0;
}