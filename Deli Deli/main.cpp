#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string,string> m;

int main()
{
	int l,n,i;
	string k,v;
	cin >> l >> n;
	for(i=0;i<l;i++){
		cin >> k >> v;
		m[k]=v;
	}
	for(i=0;i<n;i++){
		cin >> k;
		char e = k[k.length()-1];
		string ee = k.substr(k.length()-2,2);
		if(m.find(k)!=m.end()){
			cout << m[k] << endl;
		}
		else if(e=='y'){
			if(ee[0]=='a'||ee[0]=='e'||ee[0]=='i'||ee[0]=='o'||ee[0]=='u')
				cout << k << "s" << endl;
			else
				cout << k.substr(0,k.length()-1) << "ies" << endl;
		}
		else if(e=='o' || e=='s' || ee=="ch" || ee=="sh" || e=='x')
			cout << k << "es" << endl;
		else
			cout << k << "s" << endl;
	}
	return 0;
}