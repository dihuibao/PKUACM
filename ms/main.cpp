#include <iostream>
#include <string>

using namespace std;

int n;//总共出现的不同字母数，字母表从A开始
string s1,s2,s3;//分别为加数1，加数2，和
int v[27];//每个字母的取值
int digits[10];//字母是否被使用
int ok;//成功匹配
int i;


//字符串转数字
int tovalue(string s)
{
	int l= s.length();
	int vv = 0;
	for(int i=0;i<l;i++){
		vv=vv*10+v[s[i]-'A'];
	}
	return vv;
}

//排列树，数据量小没做剪枝
void dfs(int r)
{
	if(r==n){
		if(tovalue(s1)+tovalue(s2)==tovalue(s3)){
			ok=1;
		}
		return;
	}
	for(int i=0;i<10;i++){
		if(digits[i]==0){
			v[r]=i;
			digits[i]=1;
			dfs(r+1);
			if(ok)
				return;
			digits[i]=0;
		}
	}
}

int main()
{
	cin >> n;
	cin >> s1 >> s2 >> s3;
	ok=0;
	dfs(0);
	if(ok){
		cout << "SOLUTION:" << endl;
		for(i=0;i<n;i++){
			cout << char(i+'A') << ":" << v[i] << endl;
		}
	}
	else{
		cout << "NO SOLUTIONS!" << endl;
	}
}