#include <iostream>

using namespace std;

int main()
{
	int n,i,sum;
	while(cin >> n){
		if(n==0)
			break;
		sum = 0;
		for(i=0;;i++){
			if((1+i)*i/2>n)
				break;
		}
		i--;
		sum = i*(i+1)*(2*i+1)/6;
		sum += (n-(1+i)*i/2)*(i+1);
		cout << n << " " << sum << endl;
	}
	return 0;
}