#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>

using namespace std;

int a[105];
int INF= 2147483647;
int main(){
	int n, d;
	scanf("%d", &n);
	for (int i=0;i<n;i++)
		scanf("%d", &a[i]);
	
	int x, y, t;
	x= 0; y= INF; 
	for(int i=1;i<n;i++){
		x = max(x, a[i] - a[i-1]);
	}
	
	for(int i=2;i<n;i++){
		y= min ( y, a[i] - a[i-2]);
	}
	printf("%d\n", max(x,y));
	return 0;
}
