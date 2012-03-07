#include <iostream>
#include <string>

using namespace std;

string ss[20];

int main()
{
	string s;
	int i,j,k,l,p,ok,c;
	i=0;
	ok=0;
	c=0;
	while(cin >> s){
		if(s=="9"){
			c++;
			ok=0;
			for(j=0;j<i;j++){
				if(ok)
					break;
				for(k=j+1;k<i;k++){
					if(ok)
						break;
					l = min<int>(ss[j].length(),ss[k].length());
					for(p=0;p<l;p++){
						if(ss[j][p]!=ss[k][p])
							break;
					}
					if(p>=l){
						ok=1;
						cout << "Set " << c << " is not immediately decodable" << endl;
					}
				}
			}
			if(ok==0){
				cout << "Set " << c << " is immediately decodable" << endl;
			}
			i=0;
			continue;
		}
		ss[i++]=s;
	}
	return 0;
}