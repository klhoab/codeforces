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

ll d[200005], cnt[200005];

int main(){
	ll n, A, total= 0, low, up;
	
	cin >> n >> A;
	for(int i=0;i<n;i++){
		cin >> d[i];
		total+= d[i];
	}
	
	for(int i=0;i<n;i++){
		low= max(1LL, A- (total- d[i]));
		up = min(d[i], A-n+1);
		cnt[i]= (d[i]- up)+ (low - 1);
	}
	
	for(int i=0;i<n;i++)
		cout << cnt[i] << " ";
	cout << endl;
	
	return 0;
}
