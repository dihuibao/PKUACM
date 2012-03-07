//可能是精度的问题
#include <iostream>
#include <cmath>

typedef struct point_s
{
double x,y;
}point_t;

point_t arr[105];

double predo[105][105];
double used[105];

double dist(point_t p1, point_t p2)
{
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}

int main()
{
	int n,i,j,mip;
	double mi,milen=0;
	scanf("%d",&n);
	memset(used,0,sizeof(used));
	for(i=0;i<n;i++){
		scanf("%lf %lf",&(arr[i].x),&(arr[i].y));
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			predo[i][j] = dist(arr[i],arr[j]);
			predo[j][i]=predo[i][j];
		}
	}
	used[0]=0;
	mip=1;
	mi=predo[0][1];
	for(i=1;i<n;i++){
		used[i]=predo[0][i];
		if(used[i]<mi){
			mi = used[i];
			mip=i;
		}
	}
	milen+=used[mip];
	used[mip]=0;
	for(i=1;i<n;i++){	
		mi = 1000000000000000.0;
		for(i=0;i<n;i++){
			if(used[i]&&predo[mip][i]<used[i])
				used[i]=predo[mip][i];
			if(used[i]&&used[i]<mi){
				mi=used[i];
				mip=i;
			}
		}
		milen+=used[mip];
		used[mip]=0;
	}

	printf("%.2lf\n",milen);
	return 0;
}