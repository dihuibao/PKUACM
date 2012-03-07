#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

string candidates[20];

vector<int> input[1000];
int rank[21];
int used[21];

int main()
{
	int t,i,j,k,a,l,ma,mp,mi,mip;
	string line;
	stringstream ss;
	vector<int> noneed;
	vector<int>::iterator it;
	for(i=0;i<21;i++){
		used[i]=1;
	}
	cin >> t;
	getline(cin,line);
	for(i=0;i<t;i++){
		getline(cin,candidates[i]);
	}
	l=0;
	while(getline(cin,line)){
		ss << line;
		for(i=0;i<t;i++){
			ss >> a;
			input[l].push_back(a);
		}
		ss.clear();
		l++;
	}
	do{
		memset(rank,0,sizeof(int)*21);
		ma = 0;
		for(i=0;i<l;i++){
			a = ++rank[input[i].at(0)];
			if(a>ma){
				ma=a;
				mp=input[i].at(0);
			}
		}
		if(ma>l/2){
			break;
		}
		mi=l+1;
		for(i=1;i<=t;i++){
			if(used[i] && rank[i]<mi){
				mi=rank[i];
			}
		}
		for(i=1;i<=t;i++){
			if(used[i] && rank[i]==mi){
				noneed.push_back(i);
			}
		}
		if(noneed.size()==input[0].size()){
			for(i=0;i<noneed.size();i++){
				cout << candidates[noneed[i]-1] << endl;
			}
			return 0;
		}
		for(i=0;i<noneed.size();i++){
			for(j=0;j<l;j++){
				for(it=input[j].begin();it!=input[j].end();++it){
					if(noneed[i]==*it){
						input[j].erase(it);
						break;
					}
				}
			}
			used[noneed[i]]=0;
		}
		noneed.clear();
	}while(1);
	cout << candidates[mp-1] << endl;
	return 0;
}