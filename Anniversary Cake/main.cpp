#include <iostream>

using namespace std;

int cake[42][42];
int s[18];
int t,size,n,i,ok;

int search(int sz,int now);

int cmp(const void *a,const void *b)
{
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ib-ia;
}

int put(int x,int y,int sz)
{
	int p,q;
	for(p=0;p<sz;p++){
		for(q=0;q<sz;q++){
			if(x+sz>size || y+sz>size || cake[x+p][y+q]==1){
				return 0;
			}
		}
	}
	for(p=0;p<sz;p++){
		for(q=0;q<sz;q++){
			cake[x+p][y+q]=1;
		}
	}
	return 1;
}

int unput(int x,int y,int sz)
{
	int p,q;
	for(p=0;p<sz;p++){
		for(q=0;q<sz;q++){
			cake[x+p][y+q]=0;
		}
	}
	return 1;
}

void dfs(int now)
{
	int sz,p,q;
	if(now==n){
		ok = 1;
		return;
	}
	sz = s[now];
	if(!search(sz,now)){
		return;
	}
}

int search(int sz,int now){
	int p,q,a=size,b=size;
	for(p=0;p<size;p++){
		for(q=0;q<size;q++){
			if(p>=a&&q>=b)
				continue;
			if(put(p,q,sz)){
				dfs(now+1);
				unput(p,q,sz);
				a=p;
				b=q;
			}
			if(ok){
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	cin >> t;
	while(t--){
		cin >> size >> n;
		for(i=0;i<n;i++){
			cin >> s[i];
		}
		memset(cake,0,sizeof(cake));
		ok=0;
		qsort(s,n,sizeof(int),cmp);
		dfs(0);
		if(ok){
			cout << "KHOOOOB!" << endl;
		}
		else{
			cout << "HUTUTU!" << endl;
		}
	}
	return 0;
}