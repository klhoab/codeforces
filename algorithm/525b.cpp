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

int f[200005], v[200005];
int main(){
	int n,m, t, len; 
	string s;
	
	cin >> s >> m;
	
	len= s.length();
	for(int i=0;i<m;i++){
		cin >> t;
		f[t-1]++;
	}
	
	bool flip= 0;
	for(int i=0;i<len/2;i++){
		flip = (flip+ f[i])%2;
		if (flip==1){ 
			swap(s[i], s[len-i-1]);
		}
	}
	cout << s << endl;
	return 0;
}
