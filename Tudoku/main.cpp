#include <iostream>

using namespace std;

int s;

int arr[9][9];

int main()
{
	cin >> s;
	for(int i=1;i<=s;i++){
		for(int m=0;m<9;m++){
			for(int n=0;n<9;n++){
				cin >> arr[m][n];
			}
		}
	}
	return 0;
}