#include <iostream>

using namespace std;

int num[34000];

int main()
{
	int i,j,n,c;
	memset(num,0,sizeof(int)*34000);
	num[0]=num[1]=1;
	for(i=2;i<34000;i++){
		if(num[i])
			continue;
		j=i+1;
		c=0;
		while(j<34000){
			if(num[j]==0){
				c++;
				if(c==i){
					num[j]=1;
					c=0;
				}
			}
			j++;
		}
	}
	while(cin >> n){
		if(n==0)
			break;
		for(i=2;i<34000;i++){
			if(num[i]==0){
				if(n==1){
					cout << i << endl;
					break;
				}
				n--;
			}
		}
	}
	return 0;
}