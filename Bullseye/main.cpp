#include <iostream>
#include <cmath>

using namespace std;

int score(double x,double y)
{
	double r = sqrt(x*x+y*y);
	if(abs(r)<=3){
		return 100;
	}
	else if(abs(r)<=6){
		return 80;
	}
	else if(abs(r)<=9){
		return 60;
	}
	else if(abs(r)<=12){
		return 40;
	}
	else if(abs(r)<=15){
		return 20;
	}
	else{
		return 0;
	}
}

int main()
{
	double x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,s1,s2;
	while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6){
		if(x1==-100)
			break;
		s1 = score(x1,y1)+score(x2,y2)+score(x3,y3);
		s2 = score(x4,y4)+score(x5,y5)+score(x6,y6);
		if(s1==s2){
			cout << "SCORE: " << s1 << " to " << s2 << ", TIE." << endl;
		}
		else if(s1>s2){
			cout << "SCORE: " << s1 << " to " << s2 << ", PLAYER 1 WINS." << endl;
		}
		else{
			cout << "SCORE: " << s1 << " to " << s2 << ", PLAYER 2 WINS." << endl;
		}
	}
	return 0;
}