#include <iostream>

using namespace std;

int t,a,b,c,d,e,f,g,h,i;

int fy(){
	int tt,j;
	if(i==0){
		return a;
	}
	else if(i==1){
		return b;
	}
	else if(i==2){
		return c;
	}
	else{
		j=3;
		while(j<=i){
			if(j%2==1){
				tt=((d*c+e*b-f*a)%g+g)%g;
			}
			else{
				tt=((f*c-d*b+e*a)%h+h)%h;
			}
			a=b;
			b=c;
			c=tt;
			j++;
		}
		return tt;
	}
}

int main()
{
	cin >> t;
	while(t--){
		cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
		cout << fy() << endl;
	}
	return 0;
}