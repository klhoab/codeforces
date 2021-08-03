#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n; char s[100];

	scanf("%s", s); n= atoi(s);
	for (int i = 0; i < n; ++i){
		strcpy(s,"");
		scanf("%s", s);	
		int yr= atoi(s+4);
		int len = strlen(s+4);
		int t = 10;
		int cnt = 0;
		
		for (int j = 1; j < len; ++j){
			cnt+= t;
			t*= 10;
		}

		while (yr < 1989+ cnt)
			yr += t;
		printf("%d\n", yr);
	}
	return 0;
}
