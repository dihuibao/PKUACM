#include <iostream>

using namespace std;

int a[100001];

int main()
{
	int d,i;
	while(scanf("%d",&d)){
		if(d==0)
			break;
		for(i=1;i<=d;i++){
			scanf("%d",&a[i]);
		}
		for(i=1;i<=d;i++){
			if(i!=a[a[i]]){
				break;
			}
		}
		if(i==d+1){
			cout << "ambiguous" << endl;
		}
		else{
			cout << "not ambiguous" << endl;
		}
	}
	return 0;
}