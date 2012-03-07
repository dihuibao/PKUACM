#include <iostream>
#include <string>

using namespace std;

int main()
{
	int a,b,c,l,i,p,q,r,l1,l2,l3;
	string input,k1,k2,k3;
	while(cin >> a >> b >> c){
		if(a==0 && b==0 && c==0)
			break;
		cin >> input;
		l = input.length();
		k1=k2=k3="";
		for(i=0;i<l;i++){
			if(input[i]>='a'&& input[i]<='i')
				k1.append(input.substr(i,1));
			else if(input[i]>='j' && input[i]<='r')
				k2.append(input.substr(i,1));
			else
				k3.append(input.substr(i,1));
		}
		p=q=r=0;
		l1=k1.length();
		l2=k2.length();
		l3=k3.length();
		for(i=0;i<l;i++){
			if(input[i]>='a'&& input[i]<='i')
				input[i]=k1[((p++-a)%l1+l1)%l1];
			else if(input[i]>='j' && input[i]<='r')
				input[i]=k2[((q++-b)%l2+l2)%l2];
			else
				input[i]=k3[((r++-c)%l3+l3)%l3];
		}
		cout << input << endl;
	}
	return 0;
}