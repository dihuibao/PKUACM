#include <iostream>
#include <cmath>

using namespace std;

char list[731][731];

void fn(int size,int x, int y)
{
	if(size==1){
		list[x][y]='X';
	}
	else{
		int d = size/3;
		fn(size/3,x,y);
		fn(size/3,x,y+2*d);
		fn(size/3,x+d,y+d);
		fn(size/3,x+2*d,y);
		fn(size/3,x+2*d,y+2*d);
	}
}

int main()
{
	int n,size,i,j;
	while(scanf("%d",&n) && n!= -1){
		memset(list,0,sizeof(list));
		size = (int)pow(3.0,n-1);
		fn(size,0,0);
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				printf("%c",list[i][j]=='X'?'X':' ');
			}
			printf("\n");
		}
		printf("-\n");
	}
	return 0;
}