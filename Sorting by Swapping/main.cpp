#include <iostream>

using namespace std;

int num[10005];
int used[10005];

int main()
{
	int t,n,i,huan,j;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=1;i<=n;i++){
			cin >> num[i];
		}
		huan=0;
		memset(used,0,sizeof(int)*10005);
		while(1){
			for(i=1;i<=n;i++){
				if(used[i]==0){
					used[i]=1;
					j=num[i];
					while(j!=i){
						used[j]=1;
						j = num[j];				
					}
					huan++;
					break;
				}
			}
			if(i==n+1){
				break;
			}
		}
		cout << n-huan << endl;
	}
	return 0;
}