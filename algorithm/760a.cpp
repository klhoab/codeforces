#include <bits/stdc++.h>
using namespace std;
int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
int main(){
	int m, d;
	cin >> m >> d;
	int r = days[m]- (7-d+1);
	cout << ((r+6)/7 +1) << endl;
	return 0;
}
