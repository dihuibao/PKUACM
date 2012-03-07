#include <iostream>
#include <cmath>

using namespace std;

int landmark[50005];

int cmp(const void * a, const void * b)
{
	int ia = abs(*(int *)a);
	int ib = abs(*(int *)b);
	return ia-ib;
}

int main()
{
	int t,n,i,site,pos;
	cin >> t >> n;
	for(i=0;i<n;i++){
		cin >> landmark[i];
	}
	qsort(landmark,n,sizeof(int),cmp);
	site=0;
	pos=0;
	while(t>=0){
		if(pos==0){
			if(abs(landmark[0])<=t){
				t-=abs(landmark[0]);
				site++;
				pos=abs(landmark[0]);
			}
			else{
				cout << 0 << endl;
				break;
			}
		}
		else{
			if(abs(pos-landmark[site])<=t){
				t-=abs(pos-landmark[site]);
				pos = landmark[site];
				site++;
			}
			else{
				cout << site << endl;
				break;
			}
		}
	}
	return 0;
}