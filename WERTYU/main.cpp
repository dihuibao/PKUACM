#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<char,char> dict;
	dict['W']='Q';dict['E']='W';dict['R']='E';
	dict['T']='R';dict['Y']='T';dict['U']='Y';
	dict['I']='U';dict['O']='I';dict['P']='O';
	dict['[']='P';dict[']']='[';dict['\\']=']';
	dict['S']='A';dict['D']='S';dict['F']='D';
	dict['G']='F';dict['H']='G';dict['J']='H';
	dict['K']='J';dict['L']='K';dict[';']='L';
	dict['\'']=';';dict['X']='Z';dict['C']='X';
	dict['V']='C';dict['B']='V';dict['N']='B';
	dict['M']='N';dict[',']='M';dict['.']=',';
	dict['/']='.';dict['-']='0';dict['=']='-';
	dict['2']='1';dict['3']='2';dict['4']='3';
	dict['5']='4';dict['6']='5';dict['7']='6';
	dict['8']='7';dict['9']='8';dict['0']='9';
	string line;
	int l,i;
	while(getline(cin,line)){
		l = line.length();
		for(i=0;i<l;i++){
			if(line[i]!=' '){
				cout << dict[line[i]];
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}