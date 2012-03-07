#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

string tosmall(string a)
{
	string b=a;
	sort(b.begin(),b.end());
	return b;
}

string tobig(string a)
{
	string::iterator be;
	string b=a ;
	for(be=b.begin();be!=b.end();++be){
		if(*be!='0')
			break;
	}	
	sort(b.begin(),b.end());
	reverse(be,b.end());
	return b;
}

bool isdigitsame(string n)
{
	if(n.length()!=4)
		return true;
	char ch = n[0];
	if(n[0]==n[1] && n[0]==n[2] && n[0]==n[3])
		return true;
	else
		return false;
}

string jian(string a,string b)
{
	int res[4],i;
	string s;
	stringstream ss;
	for(i=0;i<4;i++){
		res[i]=a[i]-b[i];
	}
	for(i=3;i>0;i--){
		if(res[i]<0){
			res[i-1]-=1;
			res[i]+=10;
		}
	}
	for(i=0;i<4;i++){
		ss << res[i];
	}
	ss >> s;
	return s;
}

void printnum(string a)
{
	if(a=="0000"){
		cout << "0";
		return;
	}
	int leading=1;
	for(int i=0;i<4;i++){
		if(leading && a[i]=='0'){
			continue;
		}
		else{
			cout << a[i];
			if(leading)
				leading=0;
		}
	}
}

int main()
{
	string n,r,b,s;
	int count;
	while(cin >> n){
		if(n=="-1")
			break;
		count=0;
		cout << "N=" << n << ":" << endl;
		if(isdigitsame(n)){
			cout << "No!!" << endl;
		}
		else{
			r=n;
			do{
				b = tobig(r);
				s = tosmall(r);
				r = jian(b,s);
				printnum(b);
				cout << "-";
				printnum(s);
				cout << "=";
				printnum(r);
				cout << endl;
				count++;
			}while(r!="6174" && r!="0000");
			cout << "Ok!! " << count << " times" << endl;
		}
	}
	return 0;
}