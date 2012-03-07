#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string line;
	stringstream ss;
	int h,m,s,ch=0,cm=0,cs=0,speed,cspeed=0;
	double l=0;
	char c;
	while(getline(cin,line)){
		speed=-1;
		ss << line;
		ss >> h >> c >> m >> c >> s >> speed;
		ss.clear();
		l+=cspeed*(h-ch)+cspeed*(m-cm)*1.0/60+cspeed*1.0*(s-cs)/60/60;
		if(speed==-1){
			printf("%s %.2f km\n",line.c_str(),l);
		}
		else{
			cspeed=speed;
		}
		ch=h,cm=m,cs=s;
	}
	return 0;
}