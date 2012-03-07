#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main()
{
	int n,i,j,l,ll,c;
	string item;
	vector<string> v;
	map<char,int> m,mt;
	while(cin >> n){
		if(n==0)
			break;
		v.clear();
		m.clear();
		c=0;
		for(i=0;i<n;i++){
			cin >> item;
			v.push_back(item);
		}
		cin >> item;
		l = item.length();
		for(j=0;j<l;j++){
			m[item[j]]++;
		}
		for(i=0;i<n;i++){
			if(v[i].length()>l)
				continue;
			mt = m;
			ll = v[i].length();
			for(j=0;j<ll;j++){
				if(mt[v[i][j]]>0){
					mt[v[i][j]]--;
				}
				else{
					mt['_']--;
				}
			}
			if(mt['_']>=0)
				c++;
		}
		cout << c << endl;
	}
	return 0;
}