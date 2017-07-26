#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int n, x1,x2,y1,y2, sum;
	cin >> n;
	
	sum = 0;
	for(int i=0;i<n;i++){
		cin >> x1>> y1>> x2>>y2;
		int dx = x2- x1;
		int dy = y2- y1;
		if (dx<0) dx = -dx;
		if (dy<0) dy = -dy;
		++dx;
		++dy;
		
		sum+= (dx*dy);
	}
	cout << sum << endl;
	return 0;
	
}
