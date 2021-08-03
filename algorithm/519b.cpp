#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int v[3][100005];

int main(){
	int n; 
	cin >> n;
	for(int i=0;i<3;i++)
		for(int j=0;j<n-i;j++)
			cin >> v[i][j];
	
	sort(v[0], v[0]+n);
	sort(v[1], v[1]+n-1);
	sort(v[2], v[2]+n-2);
	
	int c1= v[0][n-1];
	int c2= v[1][n-2];
	
	for(int i=0;i<n-1;i++)
		if (v[0][i]!= v[1][i]){
			c1  = v[0][i];
			break;
		}
	
	for(int i=0;i<n-2;i++)
		if (v[1][i]!= v[2][i]){
			c2= v[1][i]; 
			break;
		}
		
	cout << c1 << endl;
	cout << c2 << endl;
	
	return 0;
}
