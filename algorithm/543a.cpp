#include <iostream>
using namespace std;

int dp[505][505];
int a[505];

int main(){
	int n,m,b,mod;
	cin >> n >> m >> b >> mod;
	for (int i= 0; i< n; i++)
		cin >> a[i];
	
	dp[0][0] = 1; 
	for (int w= 0; w<n; w++){
		int mb= a[w];
		for (int i= 1; i<= m; i++)
			for (int j= mb; j<= b; j++)
				dp[i][j]= (dp[i][j]+ dp[i-1][j- mb]) %mod;
	}
	int ans = 0;
	for (int i= 0; i<= b; i++)
		ans=  (ans+ dp[m][i]) % mod;
	cout << ans << endl;
	return 0;
}
