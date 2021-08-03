#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	double a, b, n, ans;
	double x, y, v, t;
	
	cin >> a >> b;
	cin >> n;
	
	for (int i= 0; i< n; i++){
		cin >> x >> y >> v;
		x-= a; y-= b;
		t = sqrt(x*x + y*y)/ v;
		if (i==0|| t< ans)
			ans = t;
	}
	printf("%.9lf\n", ans);
	return 0;
}
