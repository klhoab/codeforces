#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	
	if (x> y) swap(x,y);
	
	int sum = 0;
	while (x>=1 && y>=2){
		x--; y-= 2; sum++;
		if (x> y) swap(x,y);
	}
	cout << sum << endl;
	return 0;
}
