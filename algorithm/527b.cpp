#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

vector<int> v[26];
int m[26][26];

int main(){
	int n;
	string x, y;
	cin >> n >> x >> y;
	
	int sum = 0;
	for(int i=0;i<n;i++){
		if (x[i]!= y[i]) {
			sum++;
			v[x[i]- 'a'].push_back(i+1);
			int a = x[i] - 'a';
			int b = y[i] - 'a';
			m[a][b] = i+1;
		}
	}
	
	int c1 = -1, c2 = -1;
	
	for(int i=0;i<n;i++){
		if (x[i]!= y[i]) {
			int a = x[i]- 'a';
			int b = y[i]- 'a';
			if (m[a][b] && m[b][a]){
				cout << sum- 2 << endl;
				cout << m[a][b] << " "  << m[b][a] << endl;
				return 0;
			}
			else if (!v[b].empty()){
				c1 = i+1;
				c2 = v[b][0];
			}
		}
	}
	if (c1== -1 && c2== -1){
		cout << sum << endl;
		cout << c1 << " " << c2 << endl;
	}
	else {
		cout << sum - 1 << endl;
		cout << c1 << " " << c2 << endl;
	}
	return 0;
}
