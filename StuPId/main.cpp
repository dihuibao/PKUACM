#include <iostream>
#include <string>

using namespace std;

char id[8];

int main()
{
	int t,i,j,l,sum,p,pp;
	cin >> t;
	for(i=1;i<=t;i++){
		scanf("%s",id);
		l = strlen(id);
		sum = 0;
		for(j=0;j<l;j++){
			if(j%3==0){
				if(id[l-1-j]=='?'){
					p=9;
					pp=l-1-j;
					continue;
				}
				sum += (id[l-1-j]-'0')*9;
			}
			else if(j%3==1){
				if(id[l-1-j]=='?'){
					p=3;
					pp=l-1-j;
					continue;
				}
				sum += (id[l-1-j]-'0')*3;
			}
			else if(j%3==2){
				if(id[l-1-j]=='?'){
					p=7;
					pp=l-1-j;
					continue;
				}
				sum += (id[l-1-j]-'0')*7;
			}
		}
		for(j=0;j<10;j++){
			if((sum+j*p)%10==0){
				id[pp]=char('0'+j);
			}
		}
		printf("Scenario #%d:\n%s\n\n",i,id);
	}
	return 0;
}