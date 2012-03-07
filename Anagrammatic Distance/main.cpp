#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int c[100][100];

int main()
{
	int t,k,l1,l2,i,j;
	string s1,s2;
	char ch;
	cin >> t;
	getline(cin,s1);
	for(k=1;k<=t;k++){
		getline(cin,s1);
		getline(cin,s2);
		cout << "Case #" << k << ":  ";
		l1=s1.length();
		l2=s2.length();
		sort(s1.begin(),s1.end());
		sort(s2.begin(),s2.end());
		for(i=0;i<=l1;i++){
			c[0][i]=0;
			c[i][0]=0;
		}
		for(i=1;i<=l1;i++){
			for(j=1;j<=l2;j++){
				if(s1[i-1]==s2[j-1]){
					c[i][j]=c[i-1][j-1]+1;
				}
				else{
					if(c[i-1][j]>c[i][j-1]){
						c[i][j]=c[i-1][j];
					}
					else{
						c[i][j]=c[i][j-1];
					}
				}
			}
		}
		cout << l1+l2-2*c[l1][l2] << endl;
	}
	return 0;
}