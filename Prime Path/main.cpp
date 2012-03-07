#include <iostream>
#include <queue>

using namespace std;

int used[10000];

typedef struct s_s
{
	int v;
	int l;
}s_t;

bool isprime(int n)
{
	int i;
	for(i=2;i*i<=n;i++){
		if(n%i==0)
			break;
	}
	if(i*i<=n)
		return false;
	else
		return true;
}

int main()
{
	int t,a,b,u1,u2,u3,u4,tp,i,ok;
	queue<s_t> q;
	s_t d;
	cin >> t;
	while(t--){
		while(!q.empty()){
			q.pop();
		}
		memset(used,0,sizeof(used));
		cin >> a >> b;
		if(isprime(a) && isprime(b)){
			if(a==b){
				cout << 0 << endl;
				continue;
			}
		}
		else{
			cout << "Impossible" << endl;
			continue;
		}
		d.v=a;
		d.l=0;
		q.push(d);
		ok=0;
		while(!q.empty()){
			d=q.front();
			q.pop();
			u1 = d.v/1000;
			u2 = d.v%1000/100;
			u3 = d.v%100/10;
			u4 = d.v%10;
			d.l++;
			for(i=0;i<=9;i++){
				if(i!=u1 && i!=0){
					tp = i*1000+u2*100+u3*10+u4;
					if(isprime(tp)&& used[tp]==0){
						if(tp==b){
							cout << d.l << endl;
							ok=1;
							break;
						}
						d.v= tp;
						q.push(d);
						used[tp]=1;
					}
				}
				if(i!=u2){
					tp = u1*1000+i*100+u3*10+u4;
					if(isprime(tp) && used[tp]==0){
						if(tp==b){
							cout << d.l << endl;
							ok=1;
							break;
						}
						d.v= tp;
						q.push(d);
						used[tp]=1;
					}
				}
				if(i!=u3){
					tp = u1*1000+u2*100+i*10+u4;
					if(isprime(tp) && used[tp]==0){
						if(tp==b){
							cout << d.l << endl;
							ok=1;
							break;
						}
						d.v= tp;
						q.push(d);
						used[tp]=1;
					}
				}
				if(i!=u4){
					tp = u1*1000+u2*100+u3*10+i;
					if(isprime(tp) && used[tp]==0){
						if(tp==b){
							cout << d.l << endl;
							ok=1;
							break;
						}
						d.v= tp;
						q.push(d);
						used[tp]=1;
					}
				}
			}
			if(ok)
				break;
		}
		if(!ok){
			cout << "Impossible" << endl;
		}
	}
	return 0;
}