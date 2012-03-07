#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int perm[2000];
vector<string> rs;
vector<int> ns;

bool less_lower(const string & s1, const string &s2)
{
	int len = s1.length()<s2.length()?s1.length():s2.length();
	for( int i=0;i<len;i++){
		if(tolower(s1[i])!=tolower(s2[i])){
			return tolower(s1[i])<tolower(s2[i])?true:false;
		}
	}
	if(s1.length()>s2.length())
		return false;
	return true;
}

int main()
{
	string line;
	string s;
	stringstream ss;
	int ls,ln,i,c;
	while(getline(cin,line)){
		if(line==".")
			break;
		ls = ln = c = 0;
		ss << line;
		while(ss >> s){
			s = s.substr(0,s.length()-1);
			for(i=0;i<s.length();i++){
				if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
					break;
				}
			}
			if(i>=s.length()){
				ns.push_back(atoi(s.c_str()));
				perm[c++]=1;
			}
			else{
				rs.push_back(s);
				perm[c++]=2;
			}
		}
		sort(rs.begin(),rs.end(),less_lower);
		sort(ns.begin(),ns.end(),less<int>());
		for(i=0,ls=0,ln=0;i<c;i++){
			if(perm[i]==1){
				cout << ns[ln++];
			}
			else if(perm[i]==2){
				cout << rs[ls++];
			}
			if(i<c-1){
				cout << ", ";
			}
		}
		cout << "." << endl;
		ss.clear();
		rs.clear();
		ns.clear();
	}
	return 0;
}