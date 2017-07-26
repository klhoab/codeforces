#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
using namespace std;

int n, m;
int weight[2000], read[2000];
int stack[2000];
int sum= 0;
int put[2000];

void print(){
	for(int i=0;i<n;i++)
		printf("%d ", stack[i]+1);
	printf("\n");
}

void sim( int curr){
	for(int i=0;i<n;i++)
		if (stack[i]== curr){
			for(int j= i; j>=1; j--){
				stack[j]= stack[j-1];
				//printf("lift %d, weight %d\n", stack[j]+1, weight[stack[j]]);
				sum+= weight[stack[j]];
			}
			stack[0]= curr;
			//print();
		}
}


int main(){	
	scanf("%d %d", &n, &m);
	for (int i=0;i<n;i++)
		scanf("%d", &weight[i]);
	for	(int i=0; i<m;i++){
		scanf("%d", &read[i]);
		read[i]--;
	}
	
	int c= 0;
	for(int i=0; c<n && i<m;i++){
		if(!put[read[i]]){
			stack[c++]= read[i];
			put[read[i]]= 1;
		}
	}
	if (c<n){
		for(int i=0;i<n;i++)
			if (!put[i])
				stack[c++]= i;
	}
	
	//print();
	for(int i=0;i<m;i++)
		sim(read[i]);
	printf("%d\n", sum);
	return 0;
}
