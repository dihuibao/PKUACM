#include <iostream>

using namespace std;

int main()
{
	int a[10];
	int (*b)[10];
	a[0]=1;
	a[1]=2;
	b=&a;
	int **c[10];
	int (*d);
	int e=5;
	d=&e;
	cout << *d << endl;
	return 0;
}