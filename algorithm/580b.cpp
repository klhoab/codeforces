#include <iostream>
#include <algorithm>
using namespace std;

struct tt{
	int m, s;
	bool operator< (const tt &r) const{
		return m< r.m;
	}
} P[100005];
long long int S[100005];

int main(){
	int n, d;
	cin >> n >> d;
	for (int i=0;i<n;i++)
		cin >> P[i].m >> P[i].s;
	sort(P, P+n);	
	
	S[0] = P[0].s;
	for(int i=1;i<n;i++)
		S[i] = S[i-1]+ P[i].s;
	
	int head; long long int mx, curr;
	head = 0; 
	curr= mx= S[0];
	for (int i=1;i<n;i++){
		while (P[i].m - P[head].m >= d){
			// curr= P[i];
			++head;
		}
		if (head)
			mx = max(mx, S[i]- S[head-1]);
		else 
			mx = max(mx, S[i]);
	}
	cout << mx << endl;
	return 0;
}
