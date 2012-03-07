#include <iostream>

using namespace std;

int main()
{
	int n,s,i,j,k,d;
	cin >> n >> s;
	d=s-1;
	for(i=0;i<n;i++){
		d+=i+1;
		d = (d%9)?(d%9):9;
		for(k=0;k<i;k++){
			cout << "  ";
		}
		cout << d << " ";
		s=d;
		for(j=i+1;j<n;j++){
			s+=j;
			s%=9;
			s = s?s:9;
			cout << s;
			if(j!=n-1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}