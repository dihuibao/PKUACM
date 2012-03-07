#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int t,p,w,l,i,r;
	map<char,int> m;
	map<char,int> m2;
	int last,cur;
	m['A']=2; m['B']=2; m['C']=2;
	m['D']=3; m['E']=3; m['F']=3;
	m['G']=4; m['H']=4; m['I']=4;
	m['J']=5; m['K']=5; m['L']=5;
	m['M']=6; m['N']=6; m['O']=6;
	m['P']=7; m['Q']=7; m['R']=7;
	m['S']=7; m['T']=8; m['U']=8;
	m['V']=8; m['W']=9; m['X']=9;
	m['Y']=9; m['Z']=9; m[' ']=1;
	m2['A']=0; m2['B']=1; m2['C']=2;
	m2['D']=0; m2['E']=1; m2['F']=2;
	m2['G']=0; m2['H']=1; m2['I']=2;
	m2['J']=0; m2['K']=1; m2['L']=2;
	m2['M']=0; m2['N']=1; m2['O']=2;
	m2['P']=0; m2['Q']=1; m2['R']=2;
	m2['S']=3; m2['T']=0; m2['U']=1;
	m2['V']=2; m2['W']=0; m2['X']=1;
	m2['Y']=2; m2['Z']=3; m2[' ']=0;
	string line;
	cin >> t;
	while(t--){
		cin >> p >> w;
		getline(cin,line);
		getline(cin,line);
		l = line.length();
		last=1;
		r=0;
		for(i=0;i<l;i++){
			cur=m[line[i]];
			if(cur==last && cur!=1){
				r+=p+w+p*m2[line[i]];
			}
			else
				r+=p+p*m2[line[i]];
			last=cur;
		}
		cout << r << endl;

	}
	return 0;
}