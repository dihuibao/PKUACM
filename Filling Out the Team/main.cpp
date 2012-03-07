#include <iostream>

using namespace std;

int main()
{
	double speed;
	int weight,strength;
	int flag;
	while(cin >> speed >> weight >> strength){
		if(weight==0 && strength==0)
			break;
		flag = 0;
		if(speed<=4.5 && weight>=150 && strength>=200){
			cout << "Wide Receiver";
			flag=1;
		}
		if(speed<=6.0 && weight>=300 && strength>=500){
			if(flag)
				cout << " ";
			cout << "Lineman";
			flag=1;
		}
		if(speed<=5.0 && weight>=200 && strength>=300){
			if(flag)
				cout << " ";
			cout << "Quarterback";
			flag=1;
		}
		if(flag==0){
			cout << "No positions";
		}
		cout << endl;
	}
	return 0;
}