#include <iostream>
#include <algorithm>
using namespace std;
int a[100005];
int main(){
	int n, ans = 0; 
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a, a+n);
	for(int i=0;i<n;i++){
		if (a[0] < a[i] && a[i] < a[n-1]){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
