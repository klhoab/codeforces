#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

string s, s2, ans;
int main(){
	cin >> s;
	s2 = s;
	ans= "";
	
	int len =s.length();
	int t= len-1;
	
	for (int i=0;i<len;i++){
		if ((s[i]-'0')%2 == 0 && s[i]!= s[len-1]){
			t= i;
			if (s[len-1]> s[i]){
				swap(s2[i], s2[len-1]);
				cout << s2 << endl;
				return 0;
			}
			//swap(s2[i], s2[len-1]);
		}
	}
	if (t== len-1)
		cout << -1 << endl;
	else {
		swap(s[t], s[len-1]);
		cout << s << endl;
	}
	
	return 0;
}
