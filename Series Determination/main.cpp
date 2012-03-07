#include <iostream>

using namespace std;

int main()
{
	int f0,f1,f2,f3,f4,f5;
	while(cin >> f0 >> f1 >> f2){
		cout << f0-3*f1+3*f2 << " ";
		cout << 3*f0-8*f1+6*f2 << " ";
		cout << 6*f0-15*f1+10*f2 << endl;
	}
	return 0;
}