#include <iostream>

using namespace std;

int main()
{
	double mw,mi,tw,ti,t;
	while(cin >> mw >> mi >> tw >> ti){
		if(mw==0 && mi==0 && tw==0 && ti==0)
			break;

		if(mw*4.19*tw>335*mi+mi*2.09*(-1)*ti){
			printf("0.0 g of ice and %.1f g of water at %.1f C\n",mw+mi,(mw*4.19*tw-335*mi-mi*2.09*(-1)*ti)/(mw+mi)/4.19);
		}
		else if(mi*2.09*(-1)*ti>335*mw+mw*4.19*tw){
			printf("%.1f g of ice and 0.0 g of water at -%.1f C\n",mw+mi,(mi*2.09*(-1)*ti-335*mw-mw*4.19*tw)/(mw+mi)/2.09);
		}
		else{
			t = mw*4.19*tw+mw*335-mi*2.09*(-1)*ti;
			printf("%.1f g of ice and %.1f g of water at 0.0 C\n",mw+mi-t/335,t/335);
		}
	}
	return 0;
}