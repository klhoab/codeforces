#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n; cin >> n;
	for (int i=1;i<=n;i++){
		if (i>1) cout << " that ";
		if (i%2== 1) cout << "I hate";
		else if (i%2== 0) cout << "I love";
	}
	cout << " it" << endl;
	return 0;
}
