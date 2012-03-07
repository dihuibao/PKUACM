#include <iostream>

using namespace std;

int x[200005],y[200005];

int main()
{
	int n,i,mx,my,n1,n2;
	while(cin >> n){
		if(n==0)
			break;
		for(i=0;i<n;i++){
			cin >> x[i] >> y[i];
			if(i==n/2){
				mx=x[i];
				my=y[i];
			}
		}
		n1=0,n2=0;
		for(i=0;i<n;i++){
			if(x[i]>mx && y[i]>my || x[i]<mx && y[i]<my)
				n1++;
			if(x[i]>mx && y[i]<my || x[i]<mx && y[i]>my)
				n2++;
		}
		cout << n1 << " " << n2 << endl;
	}
	return 0;
}