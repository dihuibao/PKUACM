#include <iostream>

using namespace std;

int a[1005],c[1005],cnt;

void mergesort(int l,int r)
{
	int mid,i,j,tmp;
	if(r>l){
		mid = (l+r)/2;
		mergesort(l,mid);
		mergesort(mid+1,r);
		tmp = l;
		i = l;
		j = mid+1;
		while(i<=mid && j<=r){
			if(a[i]>a[j]){
				c[tmp++] = a[j++];
				cnt += mid-i+1;
			}
			else
				c[tmp++] = a[i++];
		}
		if(j<=r)
			for(;j<=r;++j)
				c[tmp++]=a[j];
		if(i<=mid)
			for(;i<=mid;++i)
				c[tmp++]=a[i];
		for(i=l;i<=r;++i)
			a[i]=c[i];
	}
}

int main()
{
	int t,i,j,n;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> n;
		for(j=0;j<n;j++){
			cin >> a[j];
		}
		cnt=0;
		mergesort(0,n-1);
		cout << "Scenario #" << i+1 << ":" << endl;
		cout << cnt << endl;
		cout << endl;
	}
	return 0;
}