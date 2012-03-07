#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int a[100],b[100],cc[100];

string rr[251];

string add(string sa,string sb)
{
	int la = sa.length();
	int lb = sb.length();
	int i,c,ma;
	stringstream ss;
	string s;
	memset(a,0,sizeof(int)*100);
	memset(b,0,sizeof(int)*100);
	for(i=0;i<la;i++){
		a[i]=sa[la-1-i]-'0';
	}
	for(i=0;i<lb;i++){
		b[i]=sb[lb-1-i]-'0';
	}
	c=0;
	ma = max(la,lb);
	for(i=0;i<ma;i++){
		a[i]=a[i]+b[i]+c;
		if(a[i]>9){
			c=1;
			a[i]=a[i]%10;
		}
		else{
			c=0;
		}
	}
	if(c){
		a[ma]=c;
	}
	if(c){
		ss << c;
	}
	for(i=ma-1;i>=0;i--){
		ss << a[i];
	}
	ss >> s;
	return s;
}

string multi2(string sa)
{
	stringstream ss;
	string s;
	int i,carry;
	int la = sa.length();
	memset(cc,0,sizeof(int)*100);
	for(i=0;i<la;i++){
		cc[i]=(sa[la-1-i]-'0')*2;
	}
	carry=0;
	for(i=0;i<la;i++){
		cc[i]+=carry;
		if(cc[i]>9){
			carry=cc[i]/10;
			cc[i]%=10;
		}
		else{
			carry=0;
		}
	}
	if(carry){
		cc[la]=carry;
	}
	if(cc[la]){
		ss << cc[la];
	}
	for(i=la-1;i>=0;i--){
		ss << cc[i];
	}
	ss >> s;
	return s;
}

string f(int n)
{
	string s1,s2;
	if(n==0){
		return "1";
	}
	if(n==1){
		return "1";
	}
	if(n==2){
		return "3";
	}
	if(rr[n-1]!=""){
		s1 = rr[n-1];
	}
	else{
		s1 = f(n-1);
	}
	if(rr[n-2]!=""){
		s2 = rr[n-2];
	}
	else{
		s2 = f(n-2);
	}
	rr[n]= add(s1,multi2(s2));
	return rr[n];
}

int main()
{
	int n,i;
	for(i=0;i<251;i++){
		rr[i]="";
	}
	while(cin >> n){
		cout << f(n) << endl;
	}
	return 0;
}