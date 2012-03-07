#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool prime[1000005];

int bit[40];

int mod(int bit[],int n,int p)
{
	long long r = 0,i;
	for(i=n-1;i>=0;i--){
		r = r*10000+bit[i];
		r%=p;
	}
	return (int)r;
}

int main()
{
	int i,j,l,len,ll,lc,r;
	string s;
	stringstream ss;
	for(i=0;i<1000005;i++){
		prime[i]=true;
	}
	prime[0]=prime[1]=false;
	for(i=2;i<1001;i++){
		if(prime[i]){
			for(j=2*i;j<1000005;j+=i){
				prime[j]=false;
			}
		}
	}
	while(cin >> s >> l){
		if(s=="0" && l==0){
			break;
		}
		memset(bit,0,sizeof(int)*40);
		len = s.length();
		ll = len/4;
		lc = len%4;
		for(i=0;i<ll;i++){
			ss.clear();
			ss << s.substr(len-(i+1)*4,4);
			ss >> bit[i];
		}
		if(lc>0){
			ss.clear();
			ss << s.substr(0,lc);
			ss >> bit[ll];
		}
		for(i=2;i<1000005;i++){
			if(prime[i]){
				r = mod(bit,lc?ll+1:ll,i);
				if(r==0 && i< l){
					cout << "BAD " << i << endl;
					break;
				}
				else if(r==0 && i>=l){
					cout << "GOOD" << endl;
					break;
				}
			}
		}
		if(i==1000005){
			cout << "GOOD" <<endl;
		}
	}
	return 0;
}