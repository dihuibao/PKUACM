#include <iostream>
#include <string>

using namespace std;

int calc(string a)
{
	int l = a.length();
	int i;
	int res=0;
	for(i=l-1;i>=0;i--){
		res=res*10+a[i]-'0';
	}
	return res;
}

int main()
{
	string a,b,c,line;
	while(cin >> line){
		if(line=="0+0=0"){
			cout << "True" << endl;
			break;
		}
		string::size_type add,equal;
		add = line.find("+");
		equal = line.find("=");
		a = line.substr(0,add);
		b = line.substr(add+1,equal-add-1);
		c = line.substr(equal+1);
		if(calc(a)+calc(b)==calc(c))
			cout << "True" << endl;
		else
			cout << "False" << endl;
	}
	return 0;
}