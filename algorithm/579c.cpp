#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
const int inf= 1e9+ 5;
const double eps = 0.0005;

int main(){
	double x, y,  t1, t2; 
	scanf("%lf%lf", &x, &y);
	double ans = inf;
	if (y> x){
		printf("-1\n");
	}
	else if (x== y) {
		printf("%.12lf\n", x);
	}
	else {
		double lo, hi;
		lo = 0; hi = inf;
		while (hi- lo > 1e-3){
			double mid = (lo+ hi) /2;
			if (mid==0) break;
			
			t1= (x+y)/ (2*((int)mid)); 
			if (t1>= y){
				lo = mid;
				ans= min(ans,t1);
			}
			else {
				hi = mid;
			}
		}
		
		lo = 0; hi = inf;
		while (hi- lo > 1e-3){
			double mid = (lo+ hi) /2;
			if (mid==0) break;
			
			t1= (x-y)/ (2*((int)mid));  
			if (t1>= y){
				lo = mid;
				ans= min(ans,t1);
			}
			else {
				hi = mid;
			}
		}
		if (ans== inf) printf("-1\n");
		else printf("%.12lf\n", ans);
	}			
	
	return 0;
}
