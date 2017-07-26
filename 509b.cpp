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

int a[105];

int main(){

	int n,k,min,max;
	
	scanf("%d%d", &n, &k);
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		
		if (i==0) min= max= a[i];
		else{
			if (a[i]<min) min= a[i];
			if (a[i]>max) max= a[i];
		}
	}
	
	if (max-min>k) 
		printf("NO\n");
	else{
		printf("YES\n");
		for(int i=0;i<n;i++){
			for(int j=0;j<a[i];j++)
				printf("%d ", j%k+1);
			printf("\n");
		}
	}
	return 0;
}
