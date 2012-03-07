#include <iostream>

using namespace std;

int people[1005];

int cmp(const void * a, const void * b)
{
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ia-ib;
}

int duhe(int p[],int n)
{
	if(n==1){
		return p[0];
	}
	else if(n==2){
		return p[1];
	}
	else if(n==3){
		return p[2]+p[1]+p[0];
	}
	else{
		int a = p[0];
		int b = p[1];
		int x = p[n-1];
		int y = p[n-2];
		int res;
		if(2*b>a+y)
			res = x+y+2*a;
		else
			res = x+2*b+a;
		return res+duhe(p,n-2);
	}
}

int main()
{
	int t,n,i;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0;i<n;i++){
			cin >> people[i];
		}
		qsort(people,n,sizeof(int),cmp);
		cout << duhe(people,n) << endl;
	}
	return 0;
}