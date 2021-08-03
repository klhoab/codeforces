#include <iostream>
using namespace std;

int a[105][105];
int f[105];

int main(){
	int n, ans;
	
	cin>> n;
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			cin >> a[i][j];
	
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++){
			if (a[i][j]== 3) 
				f[i] = f[j] = 1;
			if (a[i][j]== 1)
				f[i] = 1;
		}
	
	ans= 0;
	for(int i=0; i<n; i++)
		if (!f[i]) ans++;
		
	cout << ans << endl;
	if (ans){
		for(int i=0;i<n;i++)
			if (!f[i]) 
				cout << i+1 << " ";
		cout << endl;
	}
	return 0;
}
