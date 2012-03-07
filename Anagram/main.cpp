#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

bool cmp(const char& a,const char& b)
{
	int ia = int(a);
	int ib = int(b);
	int iia = (ia>=97)?ia-97:ia-65;
	int iib = (ib>=97)?ib-97:ib-65;
	if(iia==iib){
		return (ia-ib>=0)?false:true;
	}
	else{
		return (iia-iib>=0)?false:true;
	}
}

int main()
{
	int t;
	string input;
	cin >> t;
	while(t--){
		cin >> input;
		sort(input.begin(),input.end(),cmp);
		cout << input << endl;
		while(next_permutation(input.begin(),input.end(),cmp)){
			cout << input << endl;
		}
	}
	return 0;
}