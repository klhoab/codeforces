#include <iostream>
using namespace std;

int a[106][106];
int main(){
	int n, k;
	cin >> n>>k;
	if (k>(n*n+1)/2){
		cout << "NO" << endl;
		return 0;
	}
	
	cout << "YES" << endl;
	int cnt = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if (cnt<k && (i+j)%2==0){
				cnt++; 
				cout << "L";
			}
			else cout << "S";
		cout << endl;
	}
	return 0;
}
