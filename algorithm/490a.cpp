#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
	int n, t;
	vector<int> v[3];
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		scanf("%d", &t);
		v[t-1].push_back(i+1);
	}
	int m= min(v[0].size(), min(v[1].size(), v[2].size()));
	printf("%d\n", m);
	for(int i=0;i<m;i++)
		printf("%d %d %d\n", v[0][i], v[1][i], v[2][i]);
	return 0;
}
