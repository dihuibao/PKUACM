#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int m,n,sum,t;
	string word,line;
	int salary;
	map<string,int> dict;
	cin >> m >> n;
	while(m--){
		cin >> word >> salary;
		dict[word]=salary;
	}
	while(n--){
		sum = 0;
		while(cin >> line){
			if(line==".")
				break;
			if((t=dict[line])!=0){
				sum += t;
			}
		}
		cout << sum << endl;
	}
	return 0;
}