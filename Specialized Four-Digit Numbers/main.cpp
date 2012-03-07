#include <iostream>

using namespace std;

int main()
{
	int i,n,sum10,sum12,sum16;
	for(i=2992;i<10000;i++){
		sum10=sum12=sum16=0;
		n=i;
		while(n>0){
			sum10+=n%10;
			n/=10;
		}
		n=i;
		while(n>0){
			sum12+=n%12;
			n/=12;
		}
		if(sum10!=sum12){
			continue;
		}
		n=i;
		while(n>0){
			sum16+=n%16;
			n/=16;
		}
		if(sum10==sum16){
			cout << i << endl;
		}
	}
	return 0;
}