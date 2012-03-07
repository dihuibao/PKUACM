#include <iostream>

using namespace std;

int g[35];

int main()
{
	int n,i,s,hs;
	while(cin >> n){
		if(n==0)
			break;
		s=0;
		for(i=1;i<=n;i++){
			cin >> g[i];
			s+=g[i];
		}
		if(s%2){
			cout << "No equal partitioning." << endl;
		}
		else{
			s/=2;
			hs=0;
			for(i=1;hs<s;i++){
				hs+=g[i];
			}
			if(hs==s){
				cout << "Sam stops at position " << i-1 << " and Ella stops at position " << i << "." << endl;
			}
			else{
				cout << "No equal partitioning." << endl;
			}
		}
	}
	return 0;
}