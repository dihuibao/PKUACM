#include <iostream>

using namespace std;

int n,s,i,j,c,f;
int data[1005];
int data2[1005];

int fi(int n){
	int c=1,b=2;
	while((b-1)%n!=0){
		b=b*2%n;
		c++;
	}
	return c;
}

int main()
{
	cin >> n >> s;
	if(n!=1){
		f = fi(n);
		c = ((f-s)%f+f)%f;
	}
	else
		c=0;
	for(i=1;i<=n;i++){
		cin >> data[i];
	}
	for(i=0;i<c;i++){
		for(j=1;j<=n;j++){
			data2[j]=data[data[j]];
		}
		memcpy(data+1,data2+1,sizeof(int)*n);
	}
	for(i=1;i<=n;i++){
		cout << data[i] << endl;
	}
	return 0;
}