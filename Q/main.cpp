#include <iostream>
#include <string>

using namespace std;

string s[22];
string s2[22];

int main()
{
	int t,m,n,i,j,a,b;
	string tp;
	cin >> t;
	while(t--){
		cin >> m >> n;
		for(i=1;i<=m;i++){
			cin >> s[i];
			s2[i]="";
		}
		for(i=0;i<n;i++){
			cin >> a >> b;
			s2[b]=s[a];
			s[a]="";
		}
		i=1,j=1;
		while(i<=m){
			while(s[i]==""&& i<=m)i++;
			while(s2[j]!=""&& j<=m)j++;
			if(i<=m && j<=m)
				s2[j++]=s[i++];
		}

		for(i=1;i<=m;i++){
			cout << s2[i];
			if(i<m)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}