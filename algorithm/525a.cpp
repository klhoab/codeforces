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


map<char, int> mp;

int main(){
	int n; 
	string s;
	
	cin >> n >> s;
	
	int cnt= 0;
	for(int i=0;s[i];i++){
		if (s[i]>='A'&& s[i]<='Z'){
			char t = s[i]-'A'+'a';
			if (mp[t]==0) cnt++;
			else mp[t]--;
		}
		if (s[i]>='a'&& s[i]<='z')
			mp[s[i]]++;
	}
	cout << cnt << endl;
	return 0;
}
