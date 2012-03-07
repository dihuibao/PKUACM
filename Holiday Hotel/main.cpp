#include <iostream>

using namespace std;

typedef struct data_s{
	int d;
	int c;
}data_t;


data_t data[10005];

int first(const void* a, const void* b)
{
	data_t ia = *(data_t*)a;
	data_t ib = *(data_t*)b;
	return ia.d-ib.d;
}

int second(const void* a,const void* b)
{
	data_t ia = *(data_t*)a;
	data_t ib = *(data_t*)b;
	return ia.c-ib.c;
}

int main()
{
	int n,i,mi,tmi,c;
	while(scanf("%d",&n)){
		if(n==0)
			break;
		for(i=0;i<n;i++){
			scanf("%d %d",&data[i].d,&data[i].c);
		}
		qsort(data,n,sizeof(data_t),first);
		mi=INT_MAX;
		tmi=data[0].c;
		for(i=1;i<n;i++){
			if(data[i].d==data[i-1].d){
				if(data[i].c<=mi){
					if(data[i].c<tmi){
						tmi=data[i].c;
					}
				}
				else{
					data[i].c=0;
				}
			}
			else{
				mi = tmi;
				if(data[i].c>=mi){
					data[i].c=0;
				}
				else{
					mi=data[i].c;
				}
				tmi=mi;
			}
		}
		qsort(data,n,sizeof(data_t),second);
		i=0;
		while(data[i].c==0){
			i++;
		}
		mi=INT_MAX;
		tmi=data[i].d;
		c=1;
		for(i=i+1;i<n;i++){
			if(data[i].c==data[i-1].c){
				if(data[i].d<mi){
					if(data[i].d<tmi){
						tmi=data[i].d;
					}
					c++;
				}
			}
			else{
				mi=tmi;
				if(data[i].d<mi){
					c++;
					mi=data[i].d;
				}
				tmi=mi;
			}
		}
		cout << c << endl;
	}
}