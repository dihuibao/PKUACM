#include <iostream>
#include <string>

using namespace std;

string vowels[5]={"a","e","i","o","u"};

int main()
{
	string s;
	int i,len,v;
	while(cin >> s){
		if(s=="end"){
			break;
		}
		for(i=0;i<5;i++){
			if(s.find(vowels[i])!=string::npos)
				break;
		}
		if(i==5){
			cout << "<" << s << "> is not acceptable." << endl;
			continue;
		}
		len = s.length();
		for(i=0;i<len-1;i++){
			if(s[i]==s[i+1] && s[i]!='e' && s[i]!='o'){
				break;
			}
		}
		if(i<len-1){
			cout << "<" << s << "> is not acceptable." << endl;
			continue;
		}
		v=0;
		for(i=0;i<len;i++){
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
				if(v>=0){
					v++;
				}
				else{
					v=1;
				}
			}
			else{
				if(v>=0){
					v=-1;
				}
				else{
					v--;
				}
			}
			if(v>=3||v<=-3){
				cout << "<" << s << "> is not acceptable." << endl;
				break;
			}
		}
		if(v>=3||v<=-3){
			continue;
		}
		cout << "<" << s << "> is acceptable." << endl;
	}
	return 0;
}