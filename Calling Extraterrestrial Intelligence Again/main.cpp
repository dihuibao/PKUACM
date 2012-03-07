#include <iostream>

using namespace std;

bool can[100002];
int index[100002][2];
int prime[45000];

int main()
{
	int m,a,b,i,j,ok;
	for(i=0;i<45000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(i=2;i<45000;i++){
		if(prime[i]==1){
			for(j=2*i;j<45000;j+=i){
				prime[j]=0;
			}
		}
	}
	memset(can,0,sizeof(can));
	for(i=1;i<350;i++){
		for(j=i;j<100001/i;j++){
			if(prime[i] && prime[j] && i*j<=100001){
				int temp=i*j;
				can[temp]=1;
				index[temp][0]=i;
				index[temp][1]=j;
			}
		}
	}
	while(scanf("%d %d %d",&m,&a,&b)){
		if(m==0 && a==0 && b==0)
			break;
		ok=0;
		i=m;
		while(!ok){
			while(!can[i])i--;
			if(a*index[i][1]<=b*index[i][0])
				ok=1;
			else
				i--;
		}
		cout << index[i][0] << " " << index[i][1] << endl;
	}
	return 0;
}