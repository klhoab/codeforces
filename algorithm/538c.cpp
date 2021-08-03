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

int d[100005], h[100005];
int main(){
	int n,m,a,b;
	cin >> n>> m;
	
	for(int i=1;i<=m;i++){
		cin>> d[i]>> h[i];
	}
	d[m+1]= n; 
	h[m+1]= h[m]+ d[m+1]-d[m];
	d[0]= 1;
	h[0]= h[1]+ d[1]- d[0];
	m+= 2;
	
	int ans= 0;
	for(int i=1;i<m;i++){
		int r= d[i]-d[i-1];
		if (abs(h[i]- h[i-1])>r){
			cout << "IMPOSSIBLE" <<endl;
			return 0;
		}
		else{
			int dh= abs(h[i]- h[i-1]);
			int mx= max(h[i],h[i-1]);
			int t=  mx+ (r-dh)/2;
			ans = max(ans, t);
		}
	}
	cout << ans<<endl;
	return 0;
}
