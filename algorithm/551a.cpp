#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int a[20005];
int main(){
	int n, x;
	cin >> n;
	for(int i=0;i<n;i++) {
		cin >> a[i];	
	}
	
	for(int i=0;i<n;i++){
		int rank = 1;
		for(int j=0;j<n;j++){
			if (a[j] > a[i])
				rank ++;
		}
		cout << rank << " "; 
	}
	cout << endl;
	return 0;
}
