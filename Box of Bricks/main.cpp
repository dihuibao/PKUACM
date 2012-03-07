#include <iostream>

using namespace std;

int hi[55];

int main()
{
	int c=1,n,i,sum,avg,mov;
	while(cin >> n){
		if(n==0)
			break;
		sum = 0;
		mov = 0;
		for(i=0;i<n;i++){
			cin >> hi[i];
			sum += hi[i];
		}
		avg = sum / n;
		for(i=0;i<n;i++){
			if(hi[i]>avg){
				mov+=hi[i]-avg;
			}
		}
		cout << "Set #" << c << endl;
		cout << "The minimum number of moves is " << mov <<"." << endl << endl;
		c++;
	}
	
	return 0;
}