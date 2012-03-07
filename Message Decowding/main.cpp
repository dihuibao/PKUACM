#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<char,char> dict;
	string map,str;
	int i,l;
	getline(cin,map);
	getline(cin,str);
	for(i=0;i<26;i++){
		dict['a'+i]=map[i];
		dict[toupper('a')+i]=toupper(map[i]);
	}
	l = str.length();
	for(i=0;i<l;i++){
		if(str[i]==' '){
			cout << ' ';
		}
		else
			cout << dict[str[i]];
	}
	cout << endl;
	return 0;
}