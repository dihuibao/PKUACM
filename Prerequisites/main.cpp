#include <iostream>

using namespace std;

int course[102];

int cmp(const void * a,const void * b)
{
	int pa = *(int *)a;
	int pb = *(int *)b;
	return pa-pb;
}

int main()
{
	int k,m,i,j,c,r,n,cc;
	bool flag;
	while(cin >> k){
		if(k==0)
			break;
		cin >> m;
		for(i=0;i<k;i++){
			cin >> course[i];
		}
		qsort(course,k,sizeof(int),cmp);
		flag = true;
		for(i=0;i<m;i++){
			cc=0;
			cin >> c >> r;
			for(j=0;j<c;j++){
				cin >> n;
				if(bsearch(&n,course,k,sizeof(int),cmp)){
					cc++;
				}
			}
			if(cc < r){
				flag = false;
			}
		}
		if(flag){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}
	return 0;
}