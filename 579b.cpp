#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;
int a[405][405];
int m[405];
struct tt{
	int u, v, s;
	bool operator< (const tt &r) const{
		return s< r.s;
	}
};
int main(){
	int ans, n, t; 
	cin >> n; n*= 2;
	priority_queue<tt> pq;
	for (int i=1;i<=n-1;i++)
		for(int j=1;j<=i;j++){
			cin >> t;
			pq.push((tt){i+1,j,t});
		}
	int k= 0;
	while (k<=n){
		if (pq.size()==0) break;
		tt N = pq.top();
		pq.pop();
		
		if (m[N.u] || m[N.v]) continue;
		m[N.u]= N.v;
		m[N.v]= N.u;
		k+=2;
	}
	for(int i=1;i<=n;i++)cout << m[i]<< " ";
	cout << endl;
	return 0;
}
