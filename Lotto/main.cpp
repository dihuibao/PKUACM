#include <iostream>

using namespace std;

int num[13];
int used[13];

int main()
{
	int n,i,j,c;
	while(cin >> n){
		if(n==0)
			break;
		memset(used,0,sizeof(int)*13);
		for(i=0;i<6;i++){
			used[i]=1;
		}
		for(i=0;i<n;i++){
			cin >> num[i];
		}
		for(i=0;i<5;i++){
			cout << num[i] << " ";
		}
		cout << num[5] << endl;
		while(1){
			c=0;
			for(i=n-2;i>=0;i--){
				if(used[i]==1 && used[i+1]==0){
					used[i]=0;
					used[i+1]=1;
					for(j=i+2;j<i+c+2;j++){
						used[j]=1;
					}
					for(;j<n;j++){
						used[j]=0;
					}
					for(j=0;j<n;j++){
						if(used[j])
							cout << num[j] << " ";
					}
					cout << endl;
					break;
				}
				if(used[i+1]==1){
					c++;
				}
			}
			if(i<0){
				cout << endl;
				break;
			}
			
		}
	}
	return 0;
}