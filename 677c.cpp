#include <iostream>
#include <algorithm>
#include <cstring>
#include <bitset>
using namespace std;

int val(char c){
	if (c>='0' && c<='9') return c-'0';
	if (c>='A' && c<='Z') return c-'A'+10;
	if (c>='a' && c<='z') return c-'a'+36;
	if (c=='-') return 62;
	if (c=='_') return 63;
	return 0;
}

int bin(int n){
	string s=""; int c= 0;
	while (n>0){
		if (n%2== 1) s+="1";
		else s+= "0";
		n/=2;
	}
	while (s.length()< 6) s+= "0";
	for (int i=0;s[i];i++) {
		if (s[i]=='0')
			c++;
	}
	return c;
}
int main(){
	string s; 
	long long int c= 0, ans = 1;
	
	cin >> s;
	for (int i = 0; s[i]; ++i){
		c += bin(val(s[i]));
	}

	for (int i = 0; i < c; ++i)	{
		ans= (ans* 3) % ((int) 1e9+7);
	}
	cout << ans << endl;
	return 0;	
}
