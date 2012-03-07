#include <iostream>

using namespace std;

int integer[10000001];

int main()
{
	int p,p2,p3,n;
	memset(integer,0,sizeof(int)*10000001);
	integer[1]=1;
	p2=1,p3=1;p=2;
	while(p<10000001){
		if(integer[p2]*2+1<integer[p3]*3+1){
			integer[p++]=integer[p2]*2+1;
			p2++;
		}
		else if(integer[p2]*2+1>integer[p3]*3+1){
			integer[p++]=integer[p3]*3+1;
			p3++;
		}
		else{
			integer[p++]=integer[p2]*2+1;
			p2++;p3++;
		}
	}
	while(cin >> n){
		cout << integer[n] << endl;
	}
	return 0;
}