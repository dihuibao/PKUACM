#include <iostream>
#include <cmath>

using namespace std;

typedef struct position_s
{
	int x;
	int y;
}position_t;

int t,s,h,i,j,k,e,l,f;
position_t points[55];

double distanc(position_t a,position_t b)
{
	return sqrt(((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y))*1.0);
}

int minedge(int x,int y)
{
	int mi1,mi2;
	mi1 = min<int>(x,s-x);
	mi2 = min<int>(y,s-y);
	return min<int>(mi1,mi2);
}

int main()
{	
	double di;
	cin >> t;
	while(t--){
		cin >> s >> h;
		for(i=0;i<h;i++){
			cin >> points[i].x >> points[i].y ;
		}
		f=0;
		for(j=1;j<s;j++){
			for(k=1;k<s;k++){
				e = minedge(j,k);
				position_t p;
				p.x=j;
				p.y=k;
				for(l=0;l<h;l++){
					di=distanc(p,points[l]);
					if(di>e||di==0)
						break;
				}
				if(l==h){
					f=1;
					cout << j << " " << k << endl; 
					goto A;
				}
			}
		}
A:
		if(f==0){
			cout << "poodle" << endl;
		}
	}
	return 0;
}