#include <iostream>

using namespace std;

int f(int m,int n)
{
	if(n>m){
		return f(m,m);
	}
	if(m==0||n==1){
		return 1;
	}
	return f(m-n,n)+f(m,n-1);
}

int main()
{
	int t,i,m,n;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> m >> n;
		cout << f(m,n) << endl;
	}
	return 0;
}