#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, mx[3], mn[3], a, b, c;
	cin >> n;
	for(int i=0;i<3;i++)
		cin >> mn[i] >> mx[i];
	
	a= min(mx[0], n- mn[1]-mn[2]);
	n-= a;
	b= min(mx[1], n-mn[2]);
	n-= b;
	c= min(n,mx[2]);
	cout << a << " "<< b << " " << c << endl;
	return 0;
}
