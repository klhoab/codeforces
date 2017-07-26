#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>
#include <vector>
#include <set>
#include <map>

using namespace std;

map <int, int> dx, dy;
set<int> X, Y;

int main(){
	long long int w,h,n, t; char c;
	long long int max_x, max_y, t1,t2,t3;
	
	cin >> w>> h>> n;
	
	max_x= w, max_y= h;
	
	X.insert(0);
	X.insert(w);
	Y.insert(0);
	Y.insert(h);
	
	dx[w] = 1;
	dy[h] = 1;
	
	for(int i=0;i<n;i++){
		cin >> c >> t;
		if (c=='H'){
			Y.insert(t);
			set<int>::iterator it= Y.lower_bound(t);
			
			t1= *(--it) ;
			t2= *(++++it);
			
			dy[ t2- t1] --;
			dy[t2-t]++;
			dy[t- t1]++;
			
			if (dy[t2-t1]==0){
				map<int, int>::iterator it2= dy.find( t2- t1);
				dy.erase(it2);
			}
			
			max_y= (--dy.end())->first;
		}
		if (c=='V'){
			X.insert(t);
			set<int>::iterator it= X.lower_bound(t);
			
			t1= *(--it);
			t2= *(++++it);
			
			dx[ t2- t1] --;
			dx[t2-t]++;
			dx[t- t1]++;
			if (dx[t2-t1]==0){
				map<int, int>::iterator it2= dx.find( t2- t1);
				dx.erase(it2);
			}
			max_x= (--dx.end())->first;
		}
		// cout << max_x << " " << max_y <<" " << max_x * max_y << endl;
		cout << max_x * max_y << endl;
	}
	
	return 0;
}
