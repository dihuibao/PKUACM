#include <iostream>
#include <iomanip>

using namespace std;

char a[30001];

int main()
{
	int n,i,j,sum;
	cout << "PERFECTION OUTPUT" << endl;
	while(cin >> n){
		if(n==0)
			break;
		memset(a,0,sizeof(a));
		
		sum = 0;
		for(i=1;i<=n/2;i++){
			if(a[i]==0){
				if(n%i==0){
					sum+=i;
				}
				else{
					for(j=i;j<=n/2;j+=i){
						a[j]=1;
					}
				}
			}
		}
		cout << std::setw(5) << n << "  ";
		if(sum==n){
			cout << "PERFECT" << endl;
		}
		else if(sum<n){
			cout << "DEFICIENT" << endl;
		}
		else{
			cout << "ABUNDANT" << endl;
		}
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
}