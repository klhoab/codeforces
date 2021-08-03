#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int f[15][15];


int main(){
	
	for(int i=1; i<=10;i++)
		f[i][1]= f[1][i] = 1;
	
	for(int i=2; i<=10;i++)
		for(int j=2; j<=10;j++)
			f[i][j]= f[i-1][j]+ f[i][j-1];
	int n;
	scanf("%d", &n);
	printf("%d\n", f[n][n]);
	return 0;
}
