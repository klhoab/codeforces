#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int a[105];

int main(){
	double r,x,y,nx,ny,d;
	cin >> r >> x>> y >> nx >> ny;
	
	d= (nx- x)*(nx- x)+ (ny- y)*(ny- y);
	d= sqrt(d);
	int ans= d/ (2*r);
	if (d- 2*r*ans >0)
		ans++;
	
	cout << ans << endl;
	return 0;
}
