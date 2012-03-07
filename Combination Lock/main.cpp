#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d,kedu;
	while(cin >> a >> b >> c >> d){
		if(a==0 && b==0 && c==0 && d==0){
			break;
		}
		kedu = 0;
		kedu += ((a+40)-b)%40;
		kedu += ((c+40)-b)%40;
		kedu += ((c+40)-d)%40;
		kedu = 9*kedu+1080;
		cout << kedu << endl;
	}
	return 0;
}