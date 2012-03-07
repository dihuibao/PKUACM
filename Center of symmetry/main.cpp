#include <iostream>

using namespace std;

typedef struct pos_s{
	int x;
	int y;
}pos_t;

pos_t p[10005];

int cmp(const void*a ,const void*b)
{
	pos_t ta=*(pos_t*)a;
	pos_t tb=*(pos_t*)b;
	if(ta.x==tb.x)
		return ta.y-tb.y;
	return ta.x-tb.x;
}

bool binsearch(int x,int y,pos_t p[],int start,int end)
{
	if(start>end)
		return false;
	int mid = (start+end)/2;
	if(x==p[mid].x&& y==p[mid].y)
		return true;
	else if(x<p[mid].x ||(x==p[mid].x && y<p[mid].y)){
		return binsearch(x,y,p,start,mid-1);
	}
	else{
		return binsearch(x,y,p,mid+1,end);
	}
	
}

int main()
{
	int t,n,i,cx,cy;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d %d",&p[i].x,&p[i].y);
		}
		qsort(p,n,sizeof(pos_t),cmp);
		if(n%2){
			cx=p[n/2].x*2;
			cy=p[n/2].y*2;
		}
		else{
			cx = p[n/2-1].x+p[n/2].x;
			cy = p[n/2-1].y+p[n/2].y;
		}
		for(i=0;i<n;i++){
			if(!binsearch(cx-p[i].x,cy-p[i].y,p,0,n-1))
				break;
		}
		if(i==n){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}