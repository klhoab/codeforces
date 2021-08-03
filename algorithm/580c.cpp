#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> g[100005];
int cat[100005], visit[100005];
int n, m, t, u, v, c= 0, start= 0;

void dfs(int u, int curr){
	if (curr> m || visit[u]) return;
	visit[u] = 1;
	int l = g[u].size();
	
	if (l==1 && start){ 
		++c;
		return; 
	}
	start = 1;
	for (int i=0; i<l; i++)	{
		int v = g[u][i];
		if (cat[v])
			dfs(v, curr+ 1);
		else 
			dfs(v, 0);
	}
}


int main(){
	cin >> n >> m;
	for (int i=1;i<=n;i++) {
		cin >> t; 
		if (t) cat[i]= 1;
	}
	for (int i=0;i<n-1;i++){
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	dfs(1, cat[1]);
	cout << c << endl;
	return 0;
}
