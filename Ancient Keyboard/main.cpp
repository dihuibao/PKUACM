#include <iostream>

using namespace std;

int data[1030];

int main()
{
	int t,n,i,j,a,b;
	char ch;
	cin >> t;
	while(t--){
		memset(data,0,sizeof(data));
		cin >> n;
		for(i=0;i<n;i++){
			cin >> ch >> a >> b;
			for(j=a;j<b;j++){
				data[j]++;
			}
		}
		for(i=0;i<1030;i++){
			if(data[i])
				cout << char('A'+data[i]-1);
		}
		cout << endl;
	}
	return 0;
}