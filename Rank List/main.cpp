#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,int> dict;

int main()
{
	int n,i,j,m,s,count;
	string name;
	map<string,int>::const_iterator it;
	cin >> n;
	getline(cin,name);
	for(i=0;i<n;i++){
		getline(cin,name);
		dict[name]=0;
	}
	cin >> m;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin >> s;
			getline(cin,name);
			dict[name.substr(1)]+=s;
		}
		s=dict["Li Ming"];
		count=1;
		for(it=dict.begin();it!=dict.end();++it){
			if(it->second>s){
				count++;
			}
		}
		cout << count << endl;

	}
	return 0;
}