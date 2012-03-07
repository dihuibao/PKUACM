#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int t,n,i,j,ok;
vector<string> list;
string item,res;
int used[1005];

int main()
{
	cin >> t;
	while(t--){
		cin >> n;
		memset(used,0,sizeof(int)*1005);
		list.clear();
		ok=1;
		for(i=0;i<n;i++){
			cin >> item;
			list.push_back(item);
		}
		sort(list.begin(),list.end());
		used[0]=1;
		item=list[0];
		res+=item+".";
		for(i=1;i<n;i++){
			for(j=0;j<n;j++){
				if(used[j]==0 && list[j][0]==item[item.length()-1]){
					used[j]=i;
					res+=list[j]+".";
					item=list[j];
					break;
				}
			}
			if(j==n){
				ok=0;
				break;
			}
		}
		if(ok){
			cout << res.substr(0,res.length()-1) << endl;
		}
		else{
			cout << "***" << endl;
		}
		
	}
	return 0;
}