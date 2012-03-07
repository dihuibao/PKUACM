#include <iostream>
#include <string>
#include <sstream>

using namespace std;

char res[10];
int to26(int n)
{
	int i=0;
	while(n>0){
		res[i++]=char('A'+(n-1)%26);
		n=(n-1)/26;
	}
	return i-1;
}

int main()
{
	int r,c,i;
	char ch;
	string line;
	stringstream ss;
	while(1){
		cin >> line;
		ss << line;
		ss >> ch >> r >> ch >> c;
		ss.clear();
		if(r==0 && c==0)
			break;
		c = to26(c);
		for(i=c;i>=0;i--){
			printf("%c",res[i]);
		}
		printf("%d\n",r);
	}
	return 0;
}