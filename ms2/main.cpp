#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int romatoint(string str)
{
	int k,res,c,x,i,m,d,l,v,bad;
	bad=0;
	c=x=i=m=d=l=v=0;
	int len=str.length();
	k=0;
	res=0;
	while(k<len){
		if(bad)
			break;
		switch(str[k]){
			case 'M':
				m+=1000;
				if(m>3000){
					bad=1;
				}
				k++;
				break;
			case 'D':
				d+=500;
				if(d>1000){
					bad=1;
					break;
				}
				else{
					if(c>100){
						bad=1;
						break;
					}
					c=(-1)*c;
				}
				k++;
				break;
			case 'C':
				c+=100;
				if(c>300){
					bad=1;
					break;
				}
				k++;
				break;
			case 'L':
				l+=50;
				if(l>100){
					bad=1;
					break;
				}
				else{
					if(x>10){
						bad=1;
						break;
					}
					x=(-1)*x;
				}
				k++;
				break;
			case 'X':
				x+=10;
				if(x>30){
					bad=1;
					break;
				}
				k++;
				break;
			case 'V':
				v+=5;
				if(v>10){
					bad=1;
					break;
				}
				else{
					if(i>1){
						bad=1;
						break;
					}
					i=(-1)*i;
				}
				k++;
				break;
			case 'I':
				i+=1;
				if(i>3){
					bad=1;
					break;
				}
				k++;
				break;
			default:
				k++;
				bad=1;
				break;
		}
	}
	if(bad)
		return -1;
	res = res+c+x+i+m+d+l+v;
	return res;
}

int main()
{
//	cout << romatoint("VI") << endl;
//	cout << romatoint("IV") << endl;
	string s;
	ifstream in;
	int count=0;
	int line=1;
	in.open("test.txt");
	while(in >> s){
		
		if(romatoint(s)==-1){
			cout <<  line << ": " << s << endl;
			count++;
		}
		line++;
		//cout << count << endl;
	}
	cout << count << endl;

	return 0;
}