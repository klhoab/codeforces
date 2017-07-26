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

typedef long long int ll;

int main(){
	ll a,b,n,l,t,m;
	
	cin >> a>> b>> n;
	for(int i=0;i<n;i++){
		cin>> l>>t>>m;
		
		if (t < a+ (l-1)*b ){
			cout << "-1" << endl;
			continue;
		}
		
		ll q1= b, q2= 2*a-b, q3= (2*a-2*b+b*l)*(-l+1)-2*m*t;
		
		double delta=  q2*q2- 4*q1*q3;
		if (delta<0){
			cout << "-1" << endl;
			continue;
		}
		
		ll root1= (-q2+ sqrt(delta) )/ (2*q1);
		ll root2= (t- a) / b+1;
		
		// printf("r1= %lld,  r2= %lld\n", root1, root2);
		
		ll ans= min(root1, root2);
		
		
		cout << ans << endl;
	}
	
		
	return 0;
}
