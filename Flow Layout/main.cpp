#include <iostream>

using namespace std;

int main()
{
	int tw,w,h,sw,sl,ww,ll;
	while(cin >> tw){
		if(tw==0)
			break;
		ww=0;ll=0;sw=0;sl=0;
		while(cin >> w >> h){
			if(w==-1 && h==-1){
				sl+=ll;
				break;
			}
			if(ww+w<=tw){
				ww+=w;
				if(ww>sw){
					sw=ww;
				}
				if(h>ll){
					ll = h;
				}
			}
			else{
				sl+=ll;
				ll=h;
				ww=w;
				if(ww>sw){
					sw=ww;
				}
			}
		}
		cout << sw << " x " << sl << endl;
	}
	return 0;
}