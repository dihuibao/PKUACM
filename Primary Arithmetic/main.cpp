#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a,b;
	int la,lb,l,i,j,c,count,t;
	while(cin >> a >> b){
		if(a=="0" && b=="0")
			break;
		la = a.length();
		lb = b.length();
		c=0;
		count =0;
		for(i=la-1,j=lb-1;i>=0||j>=0;){
			t=0;
			if(i>=0){
				t+=a[i--]-'0';
			}
			if(j>=0){
				t+=b[j--]-'0';
			}
			if(t+c>=10){
				c=1;
				count++;
			}
		}
		if(count==0){
			cout << "No carry operation." << endl;
		}
		else if(count==1){
			cout << "1 carry operation." << endl;
		}
		else{
			cout << count << " carry operations." << endl;
		}
	}
	return 0;
}