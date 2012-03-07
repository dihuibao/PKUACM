#include <iostream>
#include <string>

using namespace std;

char p[105][105];
int n,i,j;
string s;
int ok;

void search(int x,int y,string s)
{
	int i;
	int len = s.length();
	if(y+len-1<=n){
		for(i=0;i<len;i++){
			if(p[x][y+i]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y <<" " << x << ","<< y+len-1 << endl;
			ok = 1;
			return;
		}
	}
	if(y+len-1<=n && x+len-1 <=n){
		for(i=0;i<len;i++){
			if(p[x+i][y+i]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y <<" " << x+len-1 << ","<< y+len-1 << endl;
			ok = 1;
			return;
		}
	}
	if(x+len-1 <=n){
		for(i=0;i<len;i++){
			if(p[x+i][y]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y <<" " << x+len-1 << ","<< y << endl;
			ok = 1;
			return;
		}
	}
	if(y-len+1>=1 && x+len-1 <=n){
		for(i=0;i<len;i++){
			if(p[x+i][y-i]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y <<" " << x+len-1 << ","<< y-len+1 << endl;
			ok = 1;
			return;
		}
	}
	if(y-len+1>=1){
		for(i=0;i<len;i++){
			if(p[x][y-i]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y <<" " << x<< ","<< y-len+1 << endl;
			ok = 1;
			return;
		}
	}
	if(y-len+1>=1 && x-len+1>=1){
		for(i=0;i<len;i++){
			if(p[x-i][y-i]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y << " " << x-len+1 << ","<< y-len+1 << endl;
			ok = 1;
			return;
		}
	}
	if(x-len+1 >= 1){
		for(i=0;i<len;i++){
			if(p[x-i][y]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y <<" " << x-len+1 << ","<< y << endl;
			ok = 1;
			return;
		}
	}
	if(y+len-1<=n && x-len+1 >=1){
		for(i=0;i<len;i++){
			if(p[x-i][y+i]!=s[i]){
				break;
			}
		}
		if(i==len){
			cout << x<< "," <<y <<" " << x-len+1 << ","<< y+len-1 << endl;
			ok = 1;
			return;
		}
	}
}

int main()
{
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> s;
		for(j=1;j<=n;j++){
			p[i][j]=s[j-1];
		}
	}
	while(cin >> s){
		if(s=="0"){
			break;
		}
		ok = 0;
		for(i=1;i<=n;i++){
			for(j=1;j<=n;j++){
				search(i,j,s);
				if(ok)
					break;
			}
			if(ok)
				break;
		}
		if(ok==0){
			cout << "Not found" << endl;
		}
	}
	
	return 0;
}