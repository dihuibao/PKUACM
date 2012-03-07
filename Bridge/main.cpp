#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int people[1005];
vector<string> v;

int cmp(const void* a,const void* b)
{
	int ia = *(int*)a;
	int ib = *(int*)b;
	return ia-ib;
}

int dfs(int n)
{
	return 0;
}

int main()
{
	int n,i,r=0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> people[i];
	}
	if(n==0){
		cout << 0 << endl;
		return 0;
	}
	if(n==1){
		cout << people[0] << endl;
		cout << people[0] << endl;
		return 0;
	}
	if(n==2){
		cout << people[1] << endl;
		cout << people[0] << " " << people[1] << endl;
		return 0;
	}
	qsort(people,n,sizeof(int),cmp);
	v.clear();
	for(i=n-1;i-1>=2;i-=2){
		stringstream ss;
		string s;
		ss << people[0] << " " << people[1] << endl;   
		getline(ss, s);
		v.push_back(s);
		ss.clear();
		ss << people[0] << endl;
		getline(ss,s);
		v.push_back(s);
		ss.clear();
		ss << people[i-1] << " " << people[i] << endl;
		getline(ss,s);
		v.push_back(s);
		ss.clear();
		ss << people[1] << endl;
		getline(ss,s);
		v.push_back(s);
		r+=people[i]+people[1]+people[0]+people[1];
	}
	if(i==2){
		stringstream ss;
		string s;
		ss << people[0] << " " << people[2] << endl;  
		getline(ss,s);
		v.push_back(s);
		ss.clear();
		ss << people[0] << endl;
		getline(ss,s);
		v.push_back(s);
		ss.clear();
		ss << people[0] << " " << people[1] << endl;
		getline(ss,s);
		v.push_back(s);
		r+=people[1]+people[2]+people[0];
		
	}
	else{
		stringstream ss;
		string s;
		ss << people[0] << " " << people[1] << endl;
		getline(ss,s);
		r+=people[1];
		v.push_back(s);
	}
	cout << r << endl;
	vector<string>::const_iterator it;
	for(it=v.begin();it!=v.end();++it){
		cout << *it << endl;
	}
	return 0;
}