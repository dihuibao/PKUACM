#include <iostream>
#include <string>

using namespace std;

int c[1005][1005];

int main()
{
	int l1,l2,l,i,j;
	string s1,s2;
	while(cin >> l1 >> s1 >> l2 >> s2){
		memset(c,0,sizeof(int)*1005*1005);
		for(i=1;i<=l1;i++){
			for(j=1;j<=l2;j++){
				if(s1[i-1]==s2[j-1])
					c[i][j]=c[i-1][j-1]+1;
				else{
					c[i][j]=(c[i-1][j]>c[i][j-1])?c[i-1][j]:c[i][j-1];
				}
			}
		}
		l=(l1>l2)?l1:l2;
		cout << l-c[l1][l2] << endl;
	}
	return 0;
}