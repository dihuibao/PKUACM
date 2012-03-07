#include <iostream>
#include <string>

using namespace std;

int gcd(int a,int b)
{
	if(a<b){
		int t;
		t = a;
		a = b;
		b = t;
	}
	while(b!=0){
		int t= a%b;
		a = b;
		b= t;
	}
	return a;
}

int main()
{
	string a,b,s;
	int la,lb,i,j,similar,ma,l,g;
	while(cin >> a){
		if(a=="-1")
			break;
		cin >> b;
		la = a.length();
		lb = b.length();
		s = string(lb-1,' ').append(a).append(lb-1,' ');
		ma=0;
		for(i=0;i<=lb+la-2;i++){
			similar=0;
			for(j=0;j<lb;j++){
				if(s[i+j]==b[j]){
					similar++;
				}
			}
			if(similar>ma){
				ma = similar;
			}
		}
		cout << "appx(" << a << "," << b << ") = ";
		ma*=2;
		l=la+lb;
		if(ma==0)
			cout << 0 << endl;
		else if(ma==l)
			cout << 1 << endl;
		else{
			g= gcd(ma,l);
			cout << ma/g << "/" << l/g << endl;
		}
	}
	return 0;
}