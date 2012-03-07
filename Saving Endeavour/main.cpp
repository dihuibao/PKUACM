#include <iostream>

using namespace std;

typedef struct{
	int a,b;
}Data;

Data datalist[10005];

int cmp(const void* a,const void* b)
{
	Data da = *(Data *)a;
	Data db = *(Data *)b;
	if(da.a<da.b){
		if(db.a<db.b){
			return da.a-db.a;
		}
		else{
			return -1;
		}
	}
	else{
		if(db.a<db.b){
			return 1;
		}
		else{
			return db.b-da.b;
		}
	}
}

int main()
{
	int n,a,b,i,t1,t2;
	while(cin >> n){
		if(n==0)
			break;
		memset(datalist,0,sizeof(Data));
		for(i=0;i<n;i++){
			cin >> datalist[i].a >> datalist[i].b;
		}
		qsort(datalist,n,sizeof(Data),cmp);
		t1=t2=0;
		for(i=0;i<n;i++){
			t1+=datalist[i].a;
			t2 = max(t1,t2)+datalist[i].b;
		}
		cout << t2 << endl;
	}
	return 0;
}