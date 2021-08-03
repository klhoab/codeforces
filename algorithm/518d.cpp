#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

double dp[2005][2005];
int n,t; double p;

int main(){
	cin >> n>> p >> t;
	
	double ans= 0;
	memset(dp, 0, sizeof(dp));
	dp[0][0]= 1;
	for(int i=1;i<=t;i++){
		dp[i][0]= dp[i-1][0] * (1-p);
		for(int j=1;j<=n;j++){
			ans+= dp[i-1][j-1]*p;
			dp[i][j]= dp[i-1][j-1] * p + dp[i-1][j] * (1-p) ;
			
		}
	}
	printf("%.10lf\n", ans);
	return 0;
}
