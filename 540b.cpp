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
int a[1005], b[1005];

int main(){
	int n,k,p,x,y, sum=0; 
	cin >> n >> k >> p >> x >> y;
	for(int i=0;i<k;i++) {
		int t; cin >> t;
		sum+= t;
		a[i]= b[i]= t;
	}
	
	int d= x- sum;
	if ( d< n-k){ cout << "-1" << endl; return 0;}
		
	for(int i=k;i<n;i++){
		if (sum+y+(n-i-1) <= x) a[i]= y;
		else a[i]= 1;
		b[i]= a[i];
		sum+= a[i];
	}
	sort(a,a+n);
	if (a[n/2] < y){  cout << "-1" << endl; return 0;}
	for(int i=k;i<n;i++){
		cout << b[i]<< " ";
	}
	cout << endl;
	
	return 0;
}
