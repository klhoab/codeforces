#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

int check3(int n, int m){
	if (n==m) return 0;
	else if (n>m) return n-m;
	if (m%2==0) return (check3(n,m/2)+1);
	else if (m%2==1) return (check3 (n, (m+1)/2) + 2);
}
int main(){
	int n,m, cnt=0;
	
	cin >> n>> m;
	int t= check3(n,m);
	cout << t << endl;
	return 0;
}
