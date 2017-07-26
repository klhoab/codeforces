#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

char s[100005];
int main(){
	gets(s);
	vector<int> v;
	int a,b,c;
	int last= 0;
	
	a= b= c= 0;
	int len = strlen(s);
	for (int i=0; s[i]; i++){
		if (s[i]== '(') a++;
		if (s[i]== ')') b++;
		if (s[i]== '#'){ 
			c++; 
			last= i;
		}
	}
	if (b+c>a){
		printf("-1\n");
		return 0;
	}
	
	
	int diff = a - b - c +1;
	int sum = 0;
	
	bool f= 0;	
	for (int i=0; s[i]; i++){
		if (s[i]== '(') sum++;
		if (s[i]== ')') sum--;
		if (s[i]== '#'){ 
			if(last== i){ 
				sum-= diff;
				v.push_back(diff);
			}
			else{
				sum--;
				v.push_back(1);
			}
		}
		if (sum<0){
			f= 1;
			break;
		}
	}
	if (f)
		printf("-1\n");
	else{
		for(int i=0;i<v.size();i++)
			printf("%d\n", v[i]);
	}
	return 0;	
}
