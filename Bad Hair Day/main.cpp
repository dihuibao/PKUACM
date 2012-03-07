#include <iostream>
#include <string>

using namespace std;

int s[80008];

int main()
{
	int n,i,top,m;
	long long r=0;
	scanf("%d",&n);
	top=-1;
	for(i=0;i<n;i++){
		scanf("%d",&m);
		while(top>=0 && m>=s[top]){
			top--;
		}
		s[++top]=m;
		r+=top;
	}
	cout << r << endl;
	return 0;
}