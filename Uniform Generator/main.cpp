#include <iostream>

using namespace std;

int gcd(int a,int b)
{
	if(a<b){
		return gcd(b,a);
	}
	else{
		if(b==0)
			return a;
		a=a%b;
		return gcd(b,a);
	}
}

int main()
{
	int s,m;
	while(cin >> s >> m){
		if(gcd(s,m)==1){
			printf("%10d%10d    Good Choice\n\n",s,m);
		}
		else{
			printf("%10d%10d    Bad Choice\n\n",s,m);
		}
	}
	return 0;
}