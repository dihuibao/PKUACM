#include <iostream>

using namespace std;

int main()
{
	float last,now;
	cin >> last;
	if((int)last == 999){
		return 0;
	}
	cin >> now;
	while(int(now)!=999){
		printf("%.2f\n",now-last);
		last = now;
		cin >> now;
	}
	cout << "End of Output" << endl;
	return 0;
}