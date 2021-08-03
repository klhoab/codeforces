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

double dp[105][105][105];
double sum[3];

int main(){
	int a= 2, b = 1, c= 2;
	scanf("%d%d%d",&a, &b, &c);
	
	dp[a][b][c] = 1.0;
	for(int r=a;r>=0;r--){	
		for(int s=b;s>=0;s--){	
			for(int p=c;p>=0;p--){
				double total = r*s + s*p+ p*r;
				if (total ==0 ) continue;
				if (r-1>=0) dp[r-1][s][p]+=  r*p*1.0 / total * dp[r][s][p];
				if (s-1>=0) dp[r][s-1][p]+=  s*r*1.0 / total * dp[r][s][p];
				if (p-1>=0) dp[r][s][p-1]+=  p*s*1.0 / total * dp[r][s][p];
				
			}
		}
	}
	
	for(int i=0;i<105;i++){
		sum[0]+= dp[i][0][0];
		sum[1]+= dp[0][i][0];
		sum[2]+= dp[0][0][i];
	}
	printf("%.12lf %.12lf %.12lf\n", sum[0], sum[1], sum[2]);
	return 0;
}
