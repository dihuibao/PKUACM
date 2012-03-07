#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	string::size_type pos;
	int be=0;
	while(getline(cin,s)){
		pos = s.find("\"");
		while(pos!=string::npos){
			if(be%2==0){
				s.replace(pos,1,"``");
			}
			else{
				s.replace(pos,1,"''");
			}
			pos = s.find("\"",pos+2);
			be++;
		}
		cout << s << endl;
	}
	return 0;
}