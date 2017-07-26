#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

const int MAX= 105;

class Union_Find
{
  public:
 
	int id[MAX], sz[MAX];
	Union_Find()	//class constructor
	{
		for (int i = 0; i < MAX; ++i)
		{
			id[i] = i;
			sz[i] = 1;
		}
	}
	
	int root(int i)
	{
		while(i != id[i])
		{
			id[i] = id[id[i]];	//path Compression
			i = id[i];
		}
		return i;
	}
	int find(int p, int q)
	{
		return root(p)==root(q);
	}
	void unite(int p, int q)
	{
		int i = root(p);
		int j = root(q);
 
		if(sz[i] < sz[j])
		{
			id[i] = j;
			sz[j] += sz[i];
		}
		else
		{
			id[j] = i;
			sz[i] += sz[j];
		}
	}
};

Union_Find uf[MAX];

int main(){
	int n,m,a,b,c;
	cin >> n >> m;
	for (int i=0;i<m;i++){
		cin >> a >> b >> c;
		uf[c].unite(a,b);
	}
	
	int t;
	cin >> t;
	while (t--){
		cin >> a >> b;
		int ans= 0;
		for(int i=0;i<MAX;i++)
			if (uf[i].find(a,b)) ans++;
		cout << ans << endl;
	}
	
	return 0;
}
