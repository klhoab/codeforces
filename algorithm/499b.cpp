#include <iostream>
using namespace std;

int a[100], b[100];
int main(){
	int n,x;
	cin >> n >> x;
	for(int i=0;i<n;i++)
		cin >> a[i] >> b[i];
	
	int curr = 1;
	int end = b[n-1];
	int sum = 0, k = 0;
	
	while (k < n){
		while (curr+ x <= a[k]){
			curr+= x; 
		}
		int t = b[k] - curr + 1;
		sum+= t;
		curr+= t;
		k++;
	}
	if (sum == 0) sum = 1;
	cout << sum << endl;
	return 0;
}