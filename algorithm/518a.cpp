#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
using namespace std;

char s[1000], t[1000];

int main(){
	
	cin >> s >> t;
	int a,b;
	a=b=0;
	for(int i=0;s[i];i++){
		a= a*26+ s[i]-'a';
		b= b*26+ t[i]-'a';
	}
 	if (a+1==b)
		cout << "No such string" << endl;
	else {
		int l= strlen(s);
		s[l-1]++;
		for(int i=l-1;i>=0;i--)
			if (s[i]=='z'+1){
				s[i-1]++;
				s[i]='a';
			}
		cout << s << endl;
	}
	return 0;
}
