#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
const int n= 8;
string s[n];

int main(){
	for (int i=0;i<n;i++)
		cin >> s[i];
	
	int a, b, ma= 8, mb= 8;
	
	for (int j=0;j<n;j++){
		a= b= 8;
		for (int i=0;i<n;i++){
			if (s[i][j]=='B')
				break;
			if (s[i][j]=='W'){
				a= i; break;
			}
		}
		for (int i=n-1;i>=0;i--){
			if (s[i][j]=='W')
				break;
			if (s[i][j]=='B'){
				b= n- i- 1; break;
			}
		}
		ma= min(ma, a);
		mb= min(mb, b);
	}
	if (ma <= mb) cout << "A" << endl;
	else cout << "B" << endl;
	return 0;
}
