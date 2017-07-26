#include <iostream>
using namespace std;

int main(){
	long long int t, n;
	cin >> t;
	while (t--){
		cin >> n;
		long long int sum = 0;
		sum = n* (n+1) / 2;
		for (long long int p= 1; p<= n; p*= 2){
			sum-= 2* p;
		}
		cout << sum << endl;

	}
	return 0;
}
