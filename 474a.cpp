#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;


char a[100]= "qwertyuiop[asdfghjkl;'zxcvbnm,./";
char s[100000], s1[100000];

int main(){
	char ch, t;
	gets(s1);
	gets(s);
	
	if (s1[0]=='L'){
		for(int i=0;s[i];i++)
			for(int j=0;a[j]; j++)
				if(s[i]==a[j])  
					printf("%c", a[j+1]);
	}
	else if (s1[0]=='R'){
		for(int i=0;s[i];i++)
			for(int j=0;a[j]; j++)
				if(s[i]==a[j])  
					printf("%c", a[j-1]);
	}
	printf("\n");
	return 0;
}
