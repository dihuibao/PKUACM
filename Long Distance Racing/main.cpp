#include <iostream>

using namespace std;

char unit[100005];

int main()
{
	int m,t,u,f,d,i,c=0;
	cin >> m >> t >> u >> f >> d;
	for(i=0;i<t;i++){
		cin >> unit[i];
	}
	i=0;
	while(c<m){
		if(unit[i]!='f'){
			c+=(u+d);
		}
		else{
			c+=2*f;
		}
		i++;
	}
	cout << --i << endl;
	return 0;
}