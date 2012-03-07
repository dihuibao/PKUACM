#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int rope[1005];

int cmp(const void* pa,const void* pb)
{
	int a = *((int*)pa);
	int b = *((int*)pb);
	return b-a;
}

int main()
{
	int t,n,i,ma,k;
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0;i<n;i++){
			cin >> rope[i];
		}
		qsort(rope,n,sizeof(int),cmp);
		ma = rope[0];
		for(k=2;k<=n;k++){
			if(rope[k-1]*k>ma){
				ma=rope[k-1]*k;
			}
		}
		cout << ma << endl;
	}
	return 0;
}