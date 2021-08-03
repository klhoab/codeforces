#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int a[3005];
int main(){
	int n;
	int min, min2, ans= 0;
	vector<int> v1, v2;
	
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	for(int i=0;i<n;i++){
		min = a[i]; min2= i;
		for(int j=i+1;j<n;j++){
			if (a[j] < min){
				min= a[j];
				min2= j;
			}
		}
		if(min2!=i){
			swap(a[i], a[min2]);
			v1.push_back(i);
			v2.push_back(min2);
			ans++;
		}
	}
	cout << ans << endl;
	for(int i=0;i<ans; i++)
		cout << v1[i] << " " << v2[i] << endl; 
	return 0;
}
