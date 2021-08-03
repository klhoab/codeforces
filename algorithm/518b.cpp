#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

int cnt[1000], used[200005];
string s, t;

int main(){
	cin >> s >> t;
	int a, b;
	a= b= 0;
	
	for(int i=0;s[i];i++)
		cnt[s[i]]++;
	for(int i=0;t[i];i++) if (cnt[t[i]]){
		a++;
		cnt[t[i]]--;
		used[i]= 1;
	}
	for(int i=0;t[i];i++) if (!used[i]){
		if (t[i]>='a' &&t[i]<='z' && cnt[t[i]+'A'-'a']>0){
			b++;
			cnt[t[i]+'A'-'a']--;
			used[i]= 1;
		}
		if (t[i]>='A' &&t[i]<='Z' && cnt[t[i]+'a'-'A']>0){
			b++;
			cnt[t[i]+'a'-'A']--;
			used[i]= 1;
		}
	}
	
	cout << a << " " << b<< endl;
	return 0;
}
