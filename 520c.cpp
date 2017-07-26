#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;
typedef long long int ll ;

ll  cnt[1000];
ll  check(string s1, string s2){
	ll  cnt= 0;
	for(ll  i=0;s1[i];i++){
		if (s1[i]==s2[i])
		 cnt++;
	}
	return cnt;
}

ll  power(ll  b, ll  n){
	ll  t= 1;
	for (ll  i=0;i<n;i++)
		t= (t*b)% (1000000000+7);
	return t;
}

int main(){
	string s,s1,s2; 
	ll n, sum= 0;
	
	// s1= "AAAAC", s2= "AAAAA";
	// for(ll  i=0;i<5;i++){
		// s1= s1.substr(1,4) +s1[0];
		// for(ll  j=0;j<5;j++){
			// s2= s2.substr(1,4) +s2[0];
			// ll  t= check(s1,s2);
			// cout << s1 << " " << s2 << " " << t << endl;
			// sum+= t;
		// }
	// }
	// cout << sum<< endl;
	// return 0;
	
	cin>> n>> s;
	for(ll i=0;s[i];i++)
		cnt[s[i]]++;
	
	ll max_t= 0, diff= 0;
	for(ll  i='A';i<='Z';i++)
		max_t= max(max_t, cnt[i]);
		
	for(ll i='A';i<='Z';i++)
		if (cnt[i]== max_t) 
			diff++;
	
	// cout << max_t << diff <<endl;
	
	ll  ans= 0;
	ans= power(diff, n);
	cout << ans << endl;
	
	
	return 0;
	
}
