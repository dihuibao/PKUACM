#include <iostream>

using namespace std;

int pattern[1005][1005];

int main()
{
	int p,n,c,i,j,t,cc;
	while(cin >> p >> n >> c){
		if(p==0 && n==0 && c==0)
			break;
		cc=0;
		for(i=0;i<n;i++){
			for(j=0;j<p;j++){
				scanf("%d",&pattern[i][j]);
			}
		}
		for(j=0;j<p;j++){
			t=0;
			for(i=0;i<n;i++){
				if(pattern[i][j]==1){
					t++;
				}
				else{
					if(t>=c){
						cc++;
					}
					t=0;
				}
			}
			if(t>=c){
				cc++;
			}
		}
		cout << cc << endl;
	}
	return 0;
}