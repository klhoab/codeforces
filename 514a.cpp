#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	cin >> s;
	
	for (int i=0; s[i]; i++){
		int t= s[i] - '0'; 
		if ( 9-t < t )	
			s[i] = 9- t + '0';
	}
	if (s[0]== '0') s[0]= '9';
	cout << s << endl;
	return 0;
}
