#include <iostream>

using namespace std;

long long data[1000000];

int main()
{
	long long a,b,c,n,ia,ib,ic,index;
	cin >> a >> b >> c >> n;
	ia=ib=ic=0;
	index =1;
	data[0]=1;
	while(1){
		if(data[ia]*a<=data[ib]*b&&data[ia]*a<=data[ic]*c){
			if(data[index-1]==data[ia]*a){
				index--;
			}
			data[index]=data[ia]*a;
			ia++;
		}
		else if(data[ib]*b<=data[ia]*a&&data[ib]*b<=data[ic]*c){
			if(data[index-1]==data[ib]*b){
				index--;
			}
			data[index]=data[ib]*b;
			ib++;
		}
		else if(data[ic]*c<=data[ia]*a&&data[ic]*c<=data[ib]*b){
			if(data[index-1]==data[ic]*c){
				index--;
			}
			data[index]=data[ic]*c;
			ic++;
		}
		if(index==n){
			break;
		}
		index++;
	}
	cout << data[n] << endl;
	return 0;
}