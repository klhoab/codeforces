#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;
int x[100005];

int main(){
	int n, q, t;
	cin >> n;
	for (int i= 0; i< n; i++){
		cin >> x[i];
	}
	sort(x, x+ n);
	
	cin >> q;
	for (int i= 0; i< q; i++){
		cin >> t;
		cout <<  (upper_bound(x, x+n, t) - x) << endl;
	}

	return 0;
}
