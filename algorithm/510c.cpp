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

int indeg[1000];
int used[1000];

vector< vector<int> > g;
vector<int> ans;

char s[105][105];
		
int main(){
	int n;
	scanf("%d",&n);
	
	g.resize(26);
	for(int i=0;i<n;i++)
		scanf("%s", s[i]);
		
	for(int k=0;k<n-1;k++){
		int f= 0;
		for(int i=0; s[k][i]&& s[k+1][i];i++){
			int src= s[k][i]-'a';
			int dest= s[k+1][i]-'a';
			if (src==dest) continue;
			g[src].push_back(dest);
			indeg[dest]++;
			f= 1;
			break;
		}
		if (!f && strlen(s[k])> strlen(s[k+1]) ){
			printf("Impossible\n");
			return 0;
		}
	}
	priority_queue<int, vector<int>, greater<int> > Q;
	for(int i=0;i<26;i++)
		if (indeg[i]==0)
			Q.push(i);
	
	int cnt= 0;
	while (!Q.empty()){
		int t= Q.top();
		Q.pop();
		if (used[t]) continue;
		ans.push_back(t);
		used[t]= 1;
		for(int i=0;i<g[t].size();i++){
			int t2= g[t][i];
			indeg[t2]--;
			if (indeg[t2]==0)
				Q.push(t2);
		}
		cnt++;
	}
	if (ans.size()!=26)
		printf("Impossible\n");
	else
	{
		for(int i=0;i<ans.size();i++)
			printf("%c", ans[i]+'a');
		printf("\n");
	}
		
	
	return 0;
}
