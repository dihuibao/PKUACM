#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int t,i,j,a,b;
	string s1,s2;
	cin >> t;
	while(t--){
		a=b=0;
		cin >> s1 >> s2;
		for(i=0;i<4;i++){
			if(s1[i]==s2[i]){
				a++;
			}
		}
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		i=j=0;
		while(i<4&&j<4){
			if(s1[i]==s2[j]){
				b++;
				i++;j++;
			}
			else if(s1[i]<s2[j]){
				i++;
			}
			else{
				j++;
			}
		}
		cout << a << "A" << b-a << "B" << endl;
	}
	return 0;
}