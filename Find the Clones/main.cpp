//”√map“ª÷±TLE
//#include <iostream>
//#include <string>
//#include <map>
//
//using namespace std;
//
//int cc[20010];
//
//int main()
//{
//	int n,m,i;
//	char s[30];
//	map<string,int> count;
//	map<string,int>::const_iterator cit;
//	while(cin >> n >> m){
//		if(n==0 && m==0)
//			break;
//		count.clear();
//		for(i=0;i<n;i++){
//			scanf("%s",&s);
//			count[string(s)]+=1;
//		}
//		memset(cc,0,sizeof(int)*20010);
//		for(cit=count.begin();cit!=count.end();++cit){
//			cc[cit->second]+=1;
//		}
//		for(i=1;i<=n;i++){
//			printf("%d\n",cc[i]);
//		}
//	}
//	return 0;
//}

#include <iostream>

using namespace std;

int n,m,i,c,nn;
char s[20005][30];
int cc[20006];

int cmp(const void* a,const void* b)
{
	char* sa = (char*)a;
	char* sb = (char*)b;
	return strcmp(sa,sb);
}

int main()
{

	while(cin >> n >> m){
		if(n==0 && m==0){
			break;
		}
		for(i=0;i<n;i++){
			scanf("%s",s[i]);
		}
		qsort(s,n,sizeof(char)*30,cmp);
		memset(cc,0,sizeof(int)*20005);
		nn = n;
		c=1;
		while(nn--){
			if(strcmp(s[nn],s[nn-1])==0){
				c++;
			}
			else{
				cc[c]+=1;
				c=1;
			}
		}
		for(i=1;i<=n;i++){
			cout << cc[i] << endl;
		}
	}
	
	return 0;
}