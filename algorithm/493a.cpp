#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long int ll;

char s1[1000], s2[1000];
int n;
int a[200];

struct player{
	int id, time, penalty;
};

int m[2000], m2[2000];

player p[200]; 
	
	
void print(int i){
	if (i<100)
		printf("%s %d %d\n", s1, i, p[i].time);
	else
		printf("%s %d %d\n", s2, i-100, p[i].time);
				
}

int main(){
	gets(s1);
	gets(s2);
	scanf("%d", &n);
	char team, card;
	int t, id;
	
	memset(p, 0, sizeof(p));
	for (int i=0;i<n;i++){
		scanf("%d %c %d %c", &t, &team, &id, &card);
		
		if (team=='a')
			id+= 100;
	
		p[id].time= t;
		if (card=='r'){
			if (p[id].penalty <2){
				p[id].penalty = 2;
				p[id].time= t;
				print(id);
			}
		}
		else if (card=='y'){
			if (p[id].penalty <2){
				p[id].penalty++ ;
				p[id].time= t;
				if (p[id].penalty ==2)
					print(id);
			}
		}
	}

	return 0;
}
