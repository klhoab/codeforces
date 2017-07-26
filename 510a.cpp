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



int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (i%2==0) printf("#");
			else if (i%4==1){
				if (j<m-1) printf(".");
				else printf("#");
			}
			else if (i%4==3){
				if (j==0) printf("#");
				else printf(".");
			}
		}
		printf("\n");
	}
	return 0;
}
