#include <iostream>

using namespace std;

int humble[5843];

int main()
{
	int i2,i3,i5,i7,i,n;
	humble[1]=1;
	i2=i3=i5=i7=1;
	i=2;
	while(i<5843){
		if(humble[i2]*2<=humble[i3]*3 && humble[i2]*2<=humble[i5]*5 && humble[i2]*2<=humble[i7]*7){
			if(humble[i2]*2!=humble[i-1]){
				humble[i]=humble[i2]*2;
				i++;
			}
			i2++;
		}
		else if(humble[i3]*3<=humble[i2]*2 && humble[i3]*3<=humble[i5]*5 && humble[i3]*3<=humble[i7]*7){
			if(humble[i3]*3!=humble[i-1]){
				humble[i]=humble[i3]*3;
				i++;
			}
			i3++;
		}
		else if(humble[i5]*5<=humble[i3]*3 && humble[i5]*5<=humble[i2]*2 && humble[i5]*5<=humble[i7]*7){
			if(humble[i5]*5!=humble[i-1]){
				humble[i]=humble[i5]*5;
				i++;
			}
			i5++;
		}
		else if(humble[i7]*7<=humble[i3]*3 && humble[i7]*7<=humble[i5]*5 && humble[i7]*7<=humble[i2]*2){
			if(humble[i7]*7!=humble[i-1]){
				humble[i]=humble[i7]*7;
				i++;
			}
			i7++;
		}
	}
	while(cin >> n){
		if(n==0)
			break;
		if(n%10==1){
			if(n%100==11){
				printf("The %dth humble number is %d.\n",n,humble[n]);
			}
			else
				printf("The %dst humble number is %d.\n",n,humble[n]);
		}
		else if(n%10==2){
			if(n%100==12){
				printf("The %dth humble number is %d.\n",n,humble[n]);
			}
			else
				printf("The %dnd humble number is %d.\n",n,humble[n]);
		}
		else if(n%10==3){
			if(n%100==13){
				printf("The %dth humble number is %d.\n",n,humble[n]);
			}
			else
				printf("The %drd humble number is %d.\n",n,humble[n]);
		}
		else{
			printf("The %dth humble number is %d.\n",n,humble[n]);
		}
	}
	return 0;
}