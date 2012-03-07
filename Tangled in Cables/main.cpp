#include <iostream>
#include <string>
#include <map>

using namespace std;

double g[600][600];
double near[600];

int main()
{
	map<string,int> m;
	double clen,l,sum=0,mi;
	int n,i,j,s,mip,tmip;
	string name,a,b;
	cin >> clen;
	cin >> n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			g[i][j]=INT_MAX;
		}
		near[i]=INT_MAX;
	}
	for(i=0;i<n;i++){
		cin >> name;
		m[name]=i;
	}
	cin >> s;
	for(i=0;i<s;i++){
		cin >> a >> b >> l;
		g[m[a]][m[b]]=l;
		g[m[b]][m[a]]=l;
	}
	mi=0;mip=1;
	for(i=0;i<n;i++){
		near[mip]=-1;
		sum += mi;
		tmip=mip;
		mi=INT_MAX;
		for(j=0;j<n;j++){
			if(near[j]!=-1 && g[tmip][j]<near[j]){
				near[j]=g[tmip][j];
			}
			if(near[j]!=-1 && near[j]<mi){
				mi=near[j];
				mip=j;
			}
		}
	}
	if(sum <= clen){
		printf("Need %.1f miles of cable\n",sum);
	}
	else{
		cout << "Not enough cable" << endl;
	}
	return 0;
}