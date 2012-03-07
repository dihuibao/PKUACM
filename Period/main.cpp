#include <iostream>
#include <string>

using namespace std;

int l,t=1,i,j,k;
string s;
int next[1000001];

int main()
{
	while(cin >> l){
		if(l==0)
			break;
		cin >> s;
		cout << "Test case #" << t << endl;
		t++;
		i=0;j=-1;
		next[0] = -1;
		while(i<l){
			if(j==-1 || s[i]==s[j]){
				i++;j++;
				next[i]=j;
			}
			else{
				j=next[j];
			}
		}
		for(i=2;i<=l;i++){
			if(i%(j=i-next[i])==0){
				if((k=i/j)>1){
					cout << i << " " << k << endl;
				}
			}
		}
		cout << endl;

	}
	return 0;
}