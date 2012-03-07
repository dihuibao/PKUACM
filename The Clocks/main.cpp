#include <iostream>

using namespace std;

int clock[10];
int mi=INT_MAX;
int s[10];
int mstatus[10];

void op(int i)
{
	switch(i){
		case 1:clock[1]+=1;clock[2]+=1;clock[4]+=1;clock[5]+=1;s[1]++;break;
		case 2:clock[1]+=1;clock[2]+=1;clock[3]+=1;s[2]++;break;
		case 3:clock[2]+=1;clock[3]+=1;clock[5]+=1;clock[6]+=1;s[3]++;break;
		case 4:clock[1]+=1;clock[4]+=1;clock[7]+=1;s[4]++;break;
		case 5:clock[2]+=1;clock[4]+=1;clock[5]+=1;clock[6]+=1;clock[8]+=1;s[5]++;break;
		case 6:clock[3]+=1;clock[6]+=1;clock[9]+=1;s[6]++;break;
		case 7:clock[4]+=1;clock[5]+=1;clock[7]+=1;clock[8]+=1;s[7]++;break;
		case 8:clock[7]+=1;clock[8]+=1;clock[9]+=1;s[8]++;break;
		case 9:clock[5]+=1;clock[6]+=1;clock[8]+=1;clock[9]+=1;s[9]++;break;
	}
}

void dfs(int i)
{
	int k;
	if(i==10){
		int status=0;
		for(k=1;k<=9;k++){
			if(clock[k]%4!=0)
				break;
		}
		if(k==10){
			for(k=1;k<=9;k++){
				status+=s[k]%4;
			}
			if(status<mi){
				for(k=1;k<=9;k++){
					mstatus[k]=s[k]%4;
				}
				mi = status;
			}
		}
		return;
	}
	for(int j=0;j<4;j++){
		dfs(i+1);
		op(i);
	}
}

int main()
{
	int i,j;
	for(i=1;i<=9;i++){
		cin >> clock[i];
		s[i]=0;
	}
	dfs(1);
	for(i=1;i<=9;i++){
		for(j=0;j<mstatus[i]%4;j++){
			cout << i << " ";
		}
	}
	cout << endl;
	return 0;
}