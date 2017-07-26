#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long int  n,h,k,t,curr= 0, ans= 0;
	cin >> n>> h >> k;

	for (int i = 0; i < n; ++i){
		cin >> t;
		if (curr+ t > h){
			ans+= curr/k + (curr%k> 0);
			curr= 0;
		}
		curr+= t;
		if (curr>= k){
			ans+= curr/k;
			curr%= k; 
		}
	}
	if (curr> 0){
		ans+= curr/k + (curr%k> 0);
	}
	cout << ans << endl;
	return 0;
}
