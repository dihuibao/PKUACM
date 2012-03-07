#include <iostream>

using namespace std;

int data[30005];

int main()
{
	int n,i,d,one=0,two=0,mi;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&d);
		data[i]=d;
		if(d==1){
			one++;
		}
	}
	mi = one;
	for(i=0;i<n;i++){
		if(data[i]==2){
			two++;
		}
		else{
			one--;
		}
		if((one+two)<mi){
			mi = one+two;
		}
	}
	cout << mi << endl;
	return 0;
}