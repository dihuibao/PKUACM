#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t,i,j,l,ml;
	char ch;
	string seq,msg;
	cin >> t;
	while(t--){
		cin >> seq;
		cin >> msg;
		l = seq.length();
		ml = msg.length();
		for(i=l-1;i>=0;i--){
			switch(seq[i]){
				case 'P':
					for(j=0;j<ml;j++){
						if(msg[j]>='1' && msg[j]<='9'){
							msg[j]-=1;
						}
						else if(msg[j]=='0'){
							msg[j]='9';
						}
					}
					break;
				case 'M':
					for(j=0;j<ml;j++){
						if(msg[j]>='0' && msg[j]<='8'){
							msg[j]+=1;
						}
						else if(msg[j]=='9'){
							msg[j]='0';
						}
					}
					break;
				case 'A':
					for(j=0;j<ml/2;j++){
						ch = msg[j];
						msg[j]=msg[ml-1-j];
						msg[ml-1-j]=ch;
					}
					break;
				case 'E':
					for(j=0;j<ml/2;j++){
						ch = msg[j];
						msg[j] = msg[(ml+1)/2+j];
						msg[(ml+1)/2+j] = ch;
						
					}
					break;
				case 'C':
					msg = msg.append(string(1,msg[0])).substr(1);
					break;
				case 'J':
					msg = msg.substr(0,ml-1).insert(0,string(1,msg[ml-1]));
					break;
			}
		}
		cout << msg << endl;
	}
	return 0;
}