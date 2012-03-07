#include <iostream>
#include <string>

using namespace std;

int s1[26],s2[26];
int len,i;

int cmp(const void *a, const void *b)
{
	int ia = *(int *)a;
	int ib = *(int *)b;
	return ia-ib;
}

int main()
{
	string s,ss;
	memset(s1,0,sizeof(int)*26);
	memset(s2,0,sizeof(int)*26);
	cin >> s;
	cin >> ss;
	len = s.length();
	for(i=0;i<len;i++){
		s1[s[i]-'A']+=1;
		s2[ss[i]-'A']+=1;
	}
	qsort(s1,26,sizeof(int),cmp);
	qsort(s2,26,sizeof(int),cmp);
	for(i=0;i<26;i++){
		if(s1[i]!=s2[i]){
			break;
		}
	}
	if(i==26){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
	return 0;
}