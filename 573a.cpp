#include <iostream>
using namespace std;

int a[100005];
int gcd(int x, int y){
	if (y==0) return x;
	return gcd(y, x%y);
}
int main(){

	int n; cin >> n;
	for (int i=0;i<n;i++) 
		cin >> a[i];
	int g= a[0];
	for (int i=1;i<n;i++) 
		g= gcd(a[i], g);
	for (int i=0;i<n;i++){
		int t = a[i]/ g;
		while (t%2==0) t/= 2;
		while (t%3==0) t/= 3;
		if (t!= 1) {cout << "No" <<endl; return 0; }
	}
	
	cout << "Yes" <<endl;
	return 0;
}
