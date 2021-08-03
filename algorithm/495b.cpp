#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	
	if (a==0 && b==0)
		printf("infinity\n");
	else if (a==0 && b>0){
		printf("0\n");
	}
	else if (a==b){
		printf("infinity\n");
	}
	else{
		int sum= 0;
		for (int i=1;i<= (int)sqrt(a-b);i++){
			if ( (a-b)%i== 0){
				if (i > b) 
					sum++;
				if (i*i != a-b  && (a-b)/i > b)
					sum++;
			}
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
