#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

char s[100005];
vector<string> va, vb;

bool check_a(string &s){
	if (s.length()== 0) return false;
	if (s== "0") return true;
	if (s[0]=='0') return false;
	for (int i=0; s[i]; i++)
		if (s[i]<'0' || s[i]>'9') 
			return false;
	return true;
}
void place_word(string &s){
	if (check_a(s))
		va.push_back(s);
	else 
		vb.push_back(s);
	s= "";
}

void token(char *s){
	string word = "";
	for(int i=0; s[i]; i++){
		if (s[i]==',' || s[i]== ';'){
			place_word( word);
		}
		else{ 
			word+= s[i];
		}
	}
	place_word( word);
}

string v_tostring(vector<string> &v){
	string s="";

	int l = v.size();
	if (l== 0){
		s+= "-"; 
		return s;
	} 
	else {
		s+= "\"";
		s+= v[0];
		for (int i=1; i<l; i++){
			s+= "," + v[i];
		}
		s+= "\"";
	}
}
int main(){
	gets(s);
	token(s);
	cout << v_tostring(va) << endl;
	cout << v_tostring(vb) << endl;

	return 0;
}
