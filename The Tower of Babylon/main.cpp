#include <iostream>

using namespace std;

typedef struct data_s{
	int a;
	int b;
	int c;
	int m;
}data_t;

data_t items[200];

int cmp(const void*a ,const void*b)
{
	data_t da=*(data_t*)a;
	data_t db=*(data_t*)b;
	if(da.a==db.a){
		if(da.b==db.b){
			return db.c-da.c;
		}
		else{
			return db.b-da.b;
		}
	}
	else{
		return db.a-da.a;
	}
}

int main()
{
	int n,t=1,i,j,k,s,mh,ma;
	while(scanf("%d",&n)!=EOF){
		if(n==0)
			break;
		k=0;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&items[k].a,&items[k].b,&items[k].c);
			items[k+1].a=items[k].c;
			items[k+1].b=items[k].b;
			items[k+1].c=items[k].a;
			items[k+2].a=items[k].a;
			items[k+2].b=items[k].c;
			items[k+2].c=items[k].b;
			k+=3;
		}
		for(i=0;i<k;i++){
			if(items[i].a<items[i].b){
				s=items[i].a;
				items[i].a=items[i].b;
				items[i].b=s;
			}
			items[i].m=items[i].c;
		}
		qsort(items,k,sizeof(data_t),cmp);
		ma=items[0].c;
		for(i=1;i<k;i++){
			mh=0;
			for(j=i-1;j>=0;j--){
				if(items[j].a>items[i].a && items[j].b>items[i].b){
					if(items[j].m>mh)
						mh=items[j].m;
				}
			}
			items[i].m=mh+items[i].c;
			if(items[i].m>ma)
				ma = items[i].m;
		}
		printf("Case %d: maximum height = %d\n",t++,ma);
	}
	return 0;
}