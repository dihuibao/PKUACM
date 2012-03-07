#include <iostream>

using namespace std;

typedef struct point{
	int x,y;
}POINT;

POINT ps[202];

int cmp(const void * x,const void *y)
{
	POINT px = *(POINT *)x;
	POINT py = *(POINT *)y;
	if(px.x!=py.x){
		return px.x-py.x;
	}
	else
		return px.y-py.y;
}

int main()
{
	int t,i,j,k,ma=2,c;
	cin >> t;
	for(i=0;i<t;i++){
		cin >> ps[i].x >> ps[i].y;
	}
	qsort(ps,t,sizeof(POINT),cmp);
	for(i=0;i<t;i++){
		if(t-i<ma){
			continue;
		}
		for(j=i+1;j<t;j++){
			if(t-j+1<ma){
				continue;
			}
			c=2;
			for(k=j+1;k<t;k++){
				if(((ps[i].y-ps[j].y)*(ps[k].x-ps[j].x)-(ps[k].y-ps[j].y)*(ps[i].x-ps[j].x))==0){
					c++;
				}
			}
			if(c>ma){
				ma=c;
			}
		}
	}
	cout << ma << endl;
	return 0;
}