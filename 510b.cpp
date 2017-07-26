#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

char s[100][100];
bool v[100][100];

int n,m;
int f= 0;

void dfs(int x, int y, int lx, int ly, char c){
	if (x<0|| y<0|| x>n|| y>m ||s[x][y]!=c) return;
	if (v[x][y] || f) {f = 1; return;}
	v[x][y]= 1;
	if (y+1!=ly) dfs(x, y+1, x, y, c);
	if (y-1!=ly) dfs(x, y-1, x, y, c);
	if (x-1!=lx) dfs(x-1, y, x, y, c);
	if (x+1!=lx) dfs(x+1, y, x, y, c);
}

int main(){
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
		scanf("%s", s[i]);
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if (!v[i][j]) dfs(i,j,i,j,s[i][j]);
	if (f) printf("Yes\n");
	else printf("No\n");
	return 0;
}
