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

int a[200005];
string s[]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", 
   "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
  
 string s2[]= {"","","twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
  

int main(){
	
	int n;
	
	
	cin >> n;
	if (n<=20)
		cout << s[n] << endl;
	else{
		int t1= n/10;
		int t2= n%10;
		if (t2) cout << s2[t1] << "-" << s[t2] << endl;
		else cout << s2[t1]<< endl;
	}
	
	return 0;
}
