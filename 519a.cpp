#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int sc[256];
string s;
	
int main(){

	sc['q']= 9; sc['Q'] = -9;
	sc['r']= 5; sc['R'] = -5;
	sc['b']= 3; sc['B'] = -3;
	sc['n']= 3; sc['N'] = -3;
	sc['p']= 1; sc['P'] = -1;
	
	int sum = 0;
	for (int k=0;k<8;k++){
		cin >> s;
		for (int i=0;s[i];i++)
			sum+= sc[s[i]];
	}
	if (sum==0) puts("Draw");
	else if (sum< 0) puts("White");
	else puts("Black");
	
	return 0;
}

