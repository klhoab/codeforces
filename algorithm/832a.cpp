#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	long long int n, k;
	cin >> n >> k;
	cout << (n/k %2 ? "YES": "NO") << endl;
	return 0;
}
