#include <iostream>
#include <string>

using namespace std;

string teams[16];
double p[16][16];
double score[4][16];

int main()
{
	int i,j,k,start,end,l;
	memset(score,0,sizeof(int)*4*16);
	for(i=0;i<16;i++){
		cin >> teams[i];
	}
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			cin >> p[i][j];
			p[i][j]/=100;
		}
	}
	for(j=0;j<16;j++){
		if(j%2==0){
			score[0][j]=p[j][j+1];
		}
		else{
			score[0][j]=p[j][j-1];
		}
	}
	i=4;l=1;
	while(i<=16){
		for(j=0;j<16;j++){
			if(j%i<i/2){
				start=j/i*i+i/2;
				end = j/i*i+i;
			}
			else{
				start=j/i*i;
				end=j/i*i+i/2;
			}
			for(k=start;k<end;k++){
				score[l][j]+=score[l-1][k]*p[j][k];
			}
			score[l][j]*=score[l-1][j];

		}
		i*=2;l++;
	}
	for(i=0;i<16;i++){
		printf("%-10s p=%.2f%%\n",teams[i].c_str(),score[3][i]*100);
	}
	return 0;
}