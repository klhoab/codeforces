#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
using namespace std;

int x[10005], y[10005];

// set<int> st;

set<double> st;
int gcd(int a, int b){
	if (b==0) return a;
	return gcd(b, a%b);
}

int main(){	
	int n, cx, cy;
	scanf("%d%d%d", &n, &cx, &cy);
	for(int i=0;i<n;i++)
		scanf("%d%d", &x[i], &y[i]);
	
	int cnt= 0;
		
	for(int i=0;i<n;i++){
		double a, b, t= -999;
		a= x[i]-cx;
		b= y[i]-cy;
		if (b) t= atan(a/b);
		// printf("%g\n", t);
		if (st.find(t)== st.end()){
			st.insert(t);
		}
	}
	if (st.size()>0)
		printf("%d\n", st.size());
	else printf("1\n");
	// for(int i=0;i<n;i++){
		// int a, b, t;
		
		// a= abs(x[i]-cx);
		// b= abs(y[i]-cy);
		// if (a==0 && b==0)
			// continue;
			
		// if (a && b){
			// t= gcd(a,b);
			// a/=t; b/=t;
		// }
		// else if (a==0 && b>0) b= 1;
		// else if (b==0 && a>0) a= 1;
		
		// if (st.find(a*20000+ b)== st.end()){
			// st.insert(a*20000+b);
		// }
	// }
	// int ans= st.size();
	// ans = max(ans, 1);
	// printf("%d\n", ans);
	return 0;
}
