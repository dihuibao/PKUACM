#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int t,day,year,days;
	map<string,int> mm;
	map<int,string> dd;
	mm["pop"]=0,mm["no"]=1,mm["zip"]=2,mm["zotz"]=3,mm["tzec"]=4,
	mm["xul"]=5,mm["yoxkin"]=6,mm["mol"]=7,mm["chen"]=8,mm["yax"]=9,
	mm["zac"]=10,mm["ceh"]=11,mm["mac"]=12,mm["kankin"]=13,mm["muan"]=14, 
	mm["pax"]=15,mm["koyab"]=16,mm["cumhu"]=17,mm["uayet"]=18;
	dd[1]="imix",dd[2]="ik",dd[3]="akbal",dd[4]="kan",dd[5]="chicchan",dd[6]="cimi",
	dd[7]="manik",dd[8]="lamat",dd[9]="muluk",dd[10]="ok",dd[11]="chuen",dd[12]="eb",
	dd[13]="ben",dd[14]="ix",dd[15]="mem",dd[16]="cib",dd[17]="caban",dd[18]="eznab", 
	dd[19]="canac",dd[20]="ahau";
	string month;
	cin >> t;
	cout << t << endl;
	while(t--){
		days=0;
		cin >> day;
		cin >> month;
		cin >> month;
		cin >> year;
		days=365*year+mm[month]*20+day;
		year=days/260;
		days=days%260;
		cout << days%13+1 << " " << dd[days%20+1] << " " << year << endl;
	}
	return 0;
}