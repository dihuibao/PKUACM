#include <iostream>
#include <cmath>

using namespace std;

int digit_sum(int n)
{
	int res=0;
	do{
		res+=n%10;
		n/=10;
	}while(n>0);
	return res;
}

int cut(int n,int first)
{
	for(int i=(int)sqrt(1.0*n);i>1;i--){
		if(n%i==0){
			return cut(i,0)+cut(n/i,0);
		}
	}
	if(first==0)
		return digit_sum(n);
	else
		return -1;
}

int main()
{
	int d;
	while(cin >> d){
		if(d==0)
			break;
		while(1){
			d++;
			if(digit_sum(d)==cut(d,1)){
				cout << d << endl;
				break;
			}
		}
	}
}