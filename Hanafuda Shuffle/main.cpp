#include <iostream>

using namespace std;

int cards[54],temp[54];

int main()
{
	int n,r,i,p,c;
	while(cin >> n >> r){
		if(n==0 && r==0)
			break;
		for(i=0;i<n;i++){
			cards[n-i-1]=i+1;
		}
		for(i=0;i<r;i++){
			cin >> p >> c;
			memcpy(temp,cards,sizeof(int)*(p-1));
			memcpy(cards,cards+p-1,sizeof(int)*c);
			memcpy(cards+c,temp,sizeof(int)*(p-1));
		}
		cout << cards[0] << endl;
	}
	return 0;
}