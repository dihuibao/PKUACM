//记忆化过后还超时
//#include <iostream>
//
//using namespace std;
//
//int n,i;
//int order2[20]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288};
//int memo[1000001][20];
//
//int rec(int n,int m)
//{
//	int ret=0;
//	if(m==0){
//		return 1;
//	}
//	if(memo[n][m-1]){
//		ret+=memo[n][m-1];
//	}
//	else{
//		ret+=rec(n,m-1);
//	}
//	while(n>=order2[m]){
//		n-=order2[m];
//		if(memo[n][m-1]){
//			ret+=memo[n][m-1];
//		}
//		else{
//			ret+=rec(n,m-1);
//		}
//	}
//	memo[n][m]=ret;
//	return ret;
//}
//
//int main()
//{
//	cin >> n;
//	for(i=0;i<20;i++){
//		if(order2[i]>n)
//			break;
//	}
//	i--;
//	memset(memo,0,sizeof(int)*1000001*20);
//	cout << rec(n,i) << endl;
//	return 0;
//}

#include <iostream>

using namespace std;

long long memo[1000001];

long long sumset(int n)
{
	if(memo[n])
		return memo[n];
	if(n==0||n==1)
		return (long long)1;
	if(n%2==0){
		memo[n]=(long long)sumset(n-2)+(long long)sumset(n/2);
		memo[n] = memo[n]%1000000000;
		return memo[n];
	}
	else{
		memo[n]=(long long)sumset(n-1);
		memo[n] = memo[n]%1000000000;
		return memo[n];
	}
}

int main()
{
	int n;
	cin >> n;
	memset(memo,0,sizeof(int)*1000001);
	cout << sumset(n) << endl;
	return 0;
}