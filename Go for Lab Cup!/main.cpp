#include <iostream>

using namespace std;

int table[105][105];
int win[105];

int main()
{
	int n,i,j,ma,winner;
	cin >> n;
	memset(win,0,sizeof(int));
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> table[i][j];
		}
	}
	ma=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(table[i][j]==3){
				win[i]++;
			}
		}
		if(win[i]>ma){
			ma=win[i];
			winner=i;
		}
	}
	cout << winner+1 << endl;
	return 0;
}