#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t,n,i,score,total;
	string team;
	while(cin >> t >> n){
		if(t==0 && n ==0)
			break;
		total=0;
		for(i=0;i<t;i++){
			cin >> team;
			cin >> score;
			total+=score;
		}
		cout << n*3-total << endl;

	}
	return 0;
}