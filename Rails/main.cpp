#include <iostream>
#include <stack>

using namespace std;

int c[1020];

int main()
{
	int n,i,j,f;
	while(cin >> n){
		if(n==0)
			break;
		while(cin >> c[0]){
			if(c[0]==0){
				cout << endl;
				break;
			}
			for(i=1;i<n;i++){
				cin >> c[i];
			}
			i=1;f=1;j=0;
			stack<int> s;
			while(i<=n){
				do{
					s.push(i++);
					if(i>n)
						break;
				}while(s.top()!=c[j]);
				do{
					s.pop();
					j++;
				}while(!s.empty()&&s.top()==c[j]);
			}
			while(!s.empty()){
				if(s.top()!=c[j]){
					f=0;
					break;
				}
			}
			if(f)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;

		}
	}
	return 0;
}