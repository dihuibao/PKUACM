#include <iostream>

using namespace std;

int bian[6][2];

int cmp(const void * a, const void * b){
	int ia = *(int *) a;
	int ib = *(int *) b;
	int iaa = *((int *)a+1);
	int ibb = *((int *)b+1);
	if(ia!=ib){
		return ia-ib;
	}
	else{
		return iaa-ibb;
	}
}

int main()
{
	int i,a,b;
	for(i=0;i<6;i++){
		cin >> a >> b;
		bian[i][0]=min(a,b);
		bian[i][1]=max(a,b);
	}
	qsort(bian,6,sizeof(int)*2,cmp);

	for(i=0;i<3;i++){
		if(bian[i*2][0]!=bian[i*2+1][0]||bian[i*2][1]!=bian[i*2+1][1])
			break;
	}
	if(i<3){
		cout << "IMPOSSIBLE" << endl;
	}
	else{
		if(bian[0][0]==bian[2][0]&&bian[0][1]==bian[4][0]&&bian[2][1]==bian[4][1]){
			cout << "POSSIBLE" << endl;
		}
		else{
			cout << "IMPOSSIBLE" << endl;
		}
	}
}