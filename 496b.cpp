#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


string s;
vector<string> v, v2;
int freq[10];
int INF= 2147483647;

void rotate(string &s){
	int n= s.length();
	s= s.substr(1,n-1) + s[0];
}

void addone(string &s){
	int n = s.length();
	for(int i=0;i<n;i++)
		if (s[i]<'9') s[i]++;
		else s[i] = '0';
}
int main(){
	int n;
	cin >> n >> s;
	
	/*memset(freq, 0, sizeof(freq));
	for(int i=0; s[i]; i++)
		freq[s[i]-'0'] ++;
	
	int max, max2;
	max= max2= 0;
	for(int i=0; s[i]; i++){
		if (freq[i] > max){
			max= freq[i];
			max2= i;	
		}
	}
	
	for(int i=0; s[i]; i++)
		s[i]-= min;
	*/
	
	v2.clear();
	for(int k=0;k<=9;k++){
		v.clear();
		addone(s);
		for(int i=0;i<n;i++){
			rotate(s);
			v.push_back(s);
		}	
		sort(v.begin(), v.end());
		v2.push_back(v[0]);
	}
	
	sort(v2.begin(), v2.end());
	cout << v2[0] << endl;
	
	return 0;
}
