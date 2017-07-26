#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
using namespace std;
map<string, string> mp;

int main(){
	int n;
	cin >> n;	
	string s1, s2;	
	map<string, string>::iterator it;
	
	for(int i=0;i<n;i++){
		cin >> s1>> s2;
		bool flag= 0;
		for(it = mp.begin(); it != mp.end(); ++it){
			if (it->second== s1){
				flag =1;
				it->second= s2;
				break;
			}
		}
		if (!flag)
			mp[s1] = s2;
	}
	
	cout << mp.size() << endl;
	for(it = mp.begin(); it != mp.end(); ++it){
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}
