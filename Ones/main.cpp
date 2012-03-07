#include <iostream>

using namespace std;

int main()
{
	int n,c,r;
	while(cin >> n){
		c=1;
		r=1;
		r=r%n;
		while(r!=0){
			r=r*10+1;
			c++;
			r=r%n;
		}
		cout << c << endl;
	}
	return 0;
}