#include <iostream>
#include <cmath>

using namespace std;

int t,m,n,k,i,j,index,a,sum,x,y;

typedef struct{
	int peanuts;
	int x,y;
}PLACE;

PLACE place[2600];

int cmp(const void *a,const void *b)
{
	 PLACE *pa = (PLACE*)a;
	 PLACE *pb = (PLACE*)b;
	 return pb->peanuts-pa->peanuts;
}

int main()
{
	cin >> t;
	while(t--){
		index=0;
		sum = 0;
		cin >> m >> n >> k;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cin >> a;
				if(a >0){
					PLACE pl;
					pl.peanuts=a;
					pl.x=i;
					pl.y=j;
					place[index++]=pl;
				}
			}
		}
		qsort(place,index,sizeof(PLACE),cmp);
		x=0,y=place[0].y;
		k-=2;
		for(i=0;i<index;i++){
			if(k>=(abs(place[i].x-x)+abs(place[i].y-y)+place[i].x+1)){
				sum +=place[i].peanuts;
				k-=abs(place[i].x-x)+abs(place[i].y-y)+1;
				x=place[i].x;
				y=place[i].y;
			}
			else
				break;
		}
		cout << sum << endl;
	}
	return 0;
}