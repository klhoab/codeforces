#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool is_pal(string s){
	string s2(s);
	reverse(s2.begin(), s2.end());
	return s==s2;	
}

int main(){
	int n; string s;
	cin >> s >> n;
	
	int l = s.length();
	if (l% n!= 0){
		cout << "NO" << endl;
		return 0;
	}
	
	l/= n;
	bool f= 1;
	for(int i=0;i<n;i++)
		f = f & is_pal(s.substr(i*l, l));
			
	
	if (f) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
