#include <iostream>

using namespace std;

int p[20];
int p3[20];

int main()
{
	int t,n,i,l,r;
	cin >> t;
	p3[0]=1;
	for(i=1;i<20;i++){
		p3[i]=p3[i-1]*3;
	}
	while(t--){
		cin >> n;
		l=r=0;
		for(i=0;i<20;i++){
			p[i]=n%3;
			n/=3;
		}
		for(i=0;i<19;i++){
			if(p[i]==2){
				p[i]=-1;
				p[i+1]+=1;
			}
			else if(p[i]==3){
				p[i]=0;
				p[i+1]+=1;
			}
		}
		for(i=0;i<20;i++){
			if(p[i]<0){
				if(l){
					cout << ",";
				}
				l=1;
				cout << p3[i];
			}
		}
		if(l==0){
			cout << "empty";
		}
		cout << " ";
		for(i=0;i<20;i++){
			if(p[i]>0){
				if(r){
					cout << ",";
				}
				r=1;
				cout << p3[i];
			}
		}
		if(r==0){
			cout << "empty";
		}
		cout << endl;
	}
	return 0;
}