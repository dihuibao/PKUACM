#include <iostream>
#include <cmath>

using namespace std;

double data[100];

int cmp(const void*a,const void*b)
{
	double da=*(double*)a;
	double db=*(double*)b;
	if(da<db)
		return -1;
	else if(da==db)
		return 0;
	else
		return 1;
}

int main()
{
	int n,i,j;
	double t;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> data[i];
	}
	qsort(data,n,sizeof(double),cmp);
	for(i=n-1;i>0;i--){
		t = 2*sqrt(data[i]*data[i-1]);
		j = i-2;
		while(j>0 && data[j]>t){
			data[j+1]=data[j];
		}
		data[j+1]=t;
	}
	printf("%.3f\n",data[0]);
	return 0;
}