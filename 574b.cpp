#include <iostream>
#include <vector>
using namespace std;
const int inf = 1e9+ 5;

int g[4005][4005];
int deg[4005];
int n, m, u, v, ans= inf;

void solve(){
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++)if (g[i][j]){
			for(int k=j+1;k<n;k++){
				if (g[i][k]&& g[j][k]){
					int d = deg[i]+ deg[j] + deg[k] - 6;
					if (d< ans) ans= d;
				}
			}
		}
	}
}

int main(){
	cin >> n>> m;
	for (int i=0;i<m;i++) {
		cin >> u >> v; 
		v--; u--;
		g[u][v] = 1;
		g[v][u] = 1;
		deg[u]++; deg[v]++;
	}
	solve();
	if (ans== inf) ans= -1;
	cout<< ans << endl;
	return 0;
}
