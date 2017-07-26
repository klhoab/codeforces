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

ll a[100005];

int main(){
	ll n, x,y;
	
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	sort(a, a+n);
	reverse(a, a+n);
	
	x= y= 0;
	ll sum = 0;
	
	for(int i=0;i<n-1&& x*y==0;i++){
		if (a[i] - a[i+1] > 1) continue;
		
		if (x==0) x = a[i+1];
		else {
			sum+= x* a[i+1]; 
			x= 0;
		}
		i++;
	}
	
	cout << sum << endl;
	return 0;
}
