#include <iostream>

using namespace std;

int dist[3005];

int cmp(const void * a,const void * b){
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ia-ib;
}

int main()
{
	int n,i,d,last;
	while(cin >> n){
		if(n==1){
			cin >> last;
			cout << "Jolly" << endl;
			continue;
		}
		cin >> last;
		for(i=0;i<n-1;i++){
			cin >> d;
			dist[i]=abs(d-last);
			last = d;
		}
		qsort(dist,n-1,sizeof(int),cmp);
		for(i=1;i<n;i++){
			if(i!=dist[i-1])
				break;
		}
		if(i==n){
			cout << "Jolly" << endl;
		}
		else{
			cout << "Not jolly" << endl;
		}
	}
	return 0;
}