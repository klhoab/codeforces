#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s;
	
bool check(int start, int end, char c1, char c2){
	for(int i=start; i<end-1; i++)
		if (s[i]== c1 && s[i+1]== c2)
			return true;
	return false;
}
int main(){
	cin >> s;
	int l = s.length();
	
	for(int i=0;i<l-1;i++){
		if (s[i]== 'A' && s[i+1]== 'B' && check(i+2, l, 'B', 'A') ){
			cout << "YES" << endl;
			return 0;
		}
		else if (s[i]== 'B' && s[i+1]== 'A' && check(i+2, l, 'A', 'B') ){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
