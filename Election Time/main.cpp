#include <iostream>

using namespace std;

typedef struct data_s{
	int fir;
	int sec;
}data_t;

data_t arr[50005];
data_t arr2[50005];

int first(const void * a,const void * b)
{
	data_t ia = *(data_t *)a;
	data_t ib = *(data_t *)b;
	return ib.fir-ia.fir;
}

int second(const void *a,const void * b)
{
	data_t ia = *(data_t *)a;
	data_t ib = *(data_t *)b;
	return ib.sec-ia.sec;
}

int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d %d",&arr[i].fir,&arr[i].sec);
		arr2[i].fir=arr[i].fir;
		arr2[i].sec=arr[i].sec;
	}
	qsort(arr,n,sizeof(data_t),first);
	qsort(arr,k,sizeof(data_t),second);
	for(i=0;i<n;i++){
		if(arr2[i].fir==arr[0].fir){
			cout << i+1 << endl;
			break;
		}
	}
	return 0;
}