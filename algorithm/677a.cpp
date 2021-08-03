#include <iostream>
using namespace std;

int main(){
	int  t, n, h, ans= 0;
	cin >> n >> h;
	
	ans= n;
	for (int i = 0; i < n; ++i){
		cin >> t;
		if (t> h){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
