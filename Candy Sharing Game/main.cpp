#include <iostream>

using namespace std;

int student[1000];
int give[1000];

int main()
{
	int n,i,count;
	while(cin >> n){
		if(n==0)
			break;
		for(i=0;i<n;i++){
			cin >> student[i];
		}
		count=0;
		while(1){
			for(i=0;i<n-1;i++){
				if(student[i]!=student[i+1])
					break;
			}
			if(i==n-1)
				break;
			for(i=0;i<n;i++){
				give[i]=student[i]/2;
			}
			for(i=1;i<n;i++){
				student[i]=give[i-1]+student[i]/2;
				if(student[i]%2)
					student[i]++;
			}
			student[0]=give[n-1]+student[0]/2;
			if(student[0]%2)
				student[0]++;
			count++;
		}
		cout << count << " " << student[0] << endl;
	}
	return 0;
}