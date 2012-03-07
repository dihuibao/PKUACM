#include <iostream>
#include <cmath>

using namespace std;

int num[55];

int gcd(int a,int b)
{
	if(a<b){
		gcd(b,a);
	}
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	int n,i,j,count,total;
	while(cin>>n){
		if(n==0)
			break;
		count=total=0;
		for(i=0;i<n;i++){
			cin >> num[i];
		}
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(gcd(num[i],num[j])==1){
					count++;
				}
				total++;
			}
		}
		if(count==0){
			cout << "No estimate for this data set." << endl;
		}
		else{
			printf("%.6f\n",sqrt(total*6.0/count));
		}
	}
	return 0;
}