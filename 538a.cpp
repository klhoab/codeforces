#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;

string s;
string t= "CODEFORCES";
int n = 10;

int main(){
	cin >>s;
	int len = s.length();
	
	int j= 0, j2=0;
	for(int i=0; i<len && j<10;i++)
		if (s[i]==t[j]) j++;
		else break;
	
	for(int i= len-1; i>=0&& j2<10;i--)
		if (s[i]==t[9-j2]) j2++;
		else break;
	
	if ( j+j2 >= 10 ) puts("YES");
	else puts("NO");
	
	return 0;
}
