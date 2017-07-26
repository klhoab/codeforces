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

int a[1000];

int main(){
	int v1,v2,t,d,n;
	cin >> v1>> v2>> n>> d;
	
	a[0] = v1;
	int sum = a[0];
	for(int i=1;i<n;i++){
		a[i] = min(a[i-1]+d, v2+ (n-1-i)*d);
		sum+= a[i];
	}
	cout << sum<< endl;
	return 0;
}
