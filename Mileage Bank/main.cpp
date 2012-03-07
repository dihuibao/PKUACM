#include <iostream>
#include <string>

using namespace std;

int main()
{
	string from,to,cls;
	int mile,sum=0;
	while(cin >> from){
		if(from=="#")
			break;
		if(from =="0"){
			cout << sum << endl;
			sum =0;
			continue;
		}
		cin >> to >> mile >> cls;
		if(cls=="F"){
			mile = mile*2;
			sum += mile;
		}
		else if(cls=="Y"){
			if(mile<500)
				mile=500;
			sum += mile;
		}
		else{
			mile = int(mile*1.5+0.5);
			sum += mile;
		}
	}
	return 0;
}