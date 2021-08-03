#include <iostream>
using namespace std;

int x[100006], h[100006];
int v[100006];
int main(){
	int n; 	cin >> n;
	for (int i=0;i<n;i++)
		cin >> x[i] >> h[i];
	
	int cnt = 0, curr= 0;
	
	for(int i=0;i<n;i++){
		if (i==0 || (x[i]- h[i] > x[i-1] && (v[i-1]!=2 || x[i]- h[i] > x[i-1] + h[i-1]))) //left
			v[i] = 1;
		else if (i==n-1 || (x[i]+ h[i] < x[i+1] && (v[i+1]!=1 || x[i]+ h[i]< x[i+1]- h[i+1])))
			v[i] = 2;
	}
	
	int ans= 0;
	for(int i=0;i<n;i++)
		if (v[i]) ans++;
	cout << ans << endl;
	return 0;
}
