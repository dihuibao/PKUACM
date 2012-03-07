#include <iostream>

using namespace std;

int g[30][30];
int sh[30];

int main()
{
	int n,i,j,k,c,s,mi,mp;
	char ch,ch2;
	while(cin >> n){
		if(n==0)
			break;
		s=0;
		memset(g,100,sizeof(int)*900);
		for(i=0;i<n-1;i++){
			cin >> ch >> k;
			for(j=0;j<k;j++){
				cin >> ch2 >> c;
				g[ch-'A'][ch2-'A']=c;
				g[ch2-'A'][ch-'A']=c;
			}
		}
		mi = 200;
		for(i=0;i<n;i++){
			sh[i]=g[0][i];
			if(sh[i]<mi){
				mi=sh[i];
				mp=i;
			}
		}
		sh[0]=0;
		s=0;
		for(i=0;i<n-1;i++){
			s+=mi;
			mi=200;
			sh[mp]=0;
			int omp=mp;
			for(j=0;j<n;j++){
				if(sh[j] && g[omp][j]<sh[j])
					sh[j]=g[omp][j];
				if(sh[j] && sh[j]<mi){
					mi=sh[j];
					mp=j;
				}
			}
		}
		cout << s << endl;
	}
	return 0;
}