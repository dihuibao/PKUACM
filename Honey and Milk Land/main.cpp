#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n,e,l=0,w=0,t,i;
	cin >> n >> e;
	for(i=1;i<n;i++){
		cin >> t;
		l+=t;
	}
	for(i=1;i<e;i++){
		cin >> t;
		w+=t;
	}
	cout << ceil(sqrt((l*l+w*w)*1.0)) << endl;
	return 0;
}