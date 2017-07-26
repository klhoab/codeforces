#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int a[30005];
int n,m,t;

bool check(int src, int dest){
	if (src== dest)
		return 1;
	else if (src>dest || src>=n)
		return 0;
	else 
		return check(a[src], dest);
}

int main(){	
	cin >> n >> m;
	for(int i=1;i<=n-1;i++){
		cin >> a[i];
		a[i]+= i;
	}
		
	if (check(1,m)) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
