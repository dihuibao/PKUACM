#include <iostream>
#include <map>

using namespace std;

char a[27][3];
char b[27][3];

map<char,int> m;
map<char,int> m2;

int cmp(const void *a ,const void *b)
{
	char* sa = (char *)a;
	char* sb = (char *)b;
	if(m[sa[0]]!=m[sb[0]]){
		return m[sa[0]]-m[sb[0]];
	}
	else{
		return m2[sa[1]]-m2[sb[1]];
	}
}

int main()
{
	m['2']=1;m['3']=2;m['4']=3;
	m['5']=4;m['6']=5;m['7']=6;
	m['8']=7;m['9']=8;m['T']=9;
	m['J']=10;m['Q']=11;m['K']=12;
	m['A']=13;
	m2['C']=1;m2['D']=2;m2['S']=3;
	m2['H']=4;
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&k);
		for(int j=0;j<k;j++){
			scanf("%s",a[j]);
		}
		qsort(a,k,sizeof(char)*3,cmp);
		for(int j=0;j<k;j++){
			scanf("%s",b[j]);
		}
		qsort(b,k,sizeof(char)*3,cmp);
		int s,t,p;
		s=0;t=0;p=0;
		while(t<k){
			if(cmp(a[s],b[t])<0){
				p++;
				s++;
				t++;
			}
			else{
				t++;
			}
		}
		printf("%d\n",p);
	}
	return 0;
}