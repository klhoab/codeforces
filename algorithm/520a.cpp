#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

int n,cnt[1000];
string s;


int main(){
	cin >> n >> s;
	for(int i=0;s[i];i++)
		if (s[i]>='a'&& s[i]<='z') cnt[s[i]-'a']++;
		else if (s[i]>='A' && s[i]<='Z') cnt[s[i]-'A']++;
	
	bool flag= 0;
	for(int i=0;i<26;i++)
		if (cnt[i]==0) flag= 1;
	
	if (flag) puts("NO");
	else puts("YES");
	
	return 0;
}
