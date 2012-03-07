#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int sum,l,i;
	while(getline(cin,s)){
		if(s=="#")
			break;
		sum = 0;
		l = s.length();
		for(i=0;i<l;i++){
			if(s[i]!=' '){
				sum += (i+1)*(s[i]-'A'+1);
			}
		}
		cout << sum << endl;
	}
	return 0;
}