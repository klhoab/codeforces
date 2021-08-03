#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int cnt[26];
int special= -1;
vector<int> odd;

void modify_pal(string &s){
	for(int i=0; s[i]; i++)
		if (s[i]>='a' && s[i]<='z')
			cnt[s[i]- 'a']++;

	for(int i=0;i< 26; i++)
		if (cnt[i]%2== 1) 
			odd.push_back(i);
	if (odd.size()== 0) return ;

	int head= 0, tail= odd.size();
	while (tail- head>= 2){
		++cnt[odd[head]]; 
		--cnt[odd[tail- 1]];
		++head; --tail;
	}
	if (tail- head == 1){
		cnt[odd[head]]--;
		special = odd[head];
	}
}
void print(){
	string s= "";
	for(int i=0;i<26;i++)
		for(int j=0;j< cnt[i]/2; j++)
			s+= ('a'+ i);
	string s2(s);
	reverse(s2.begin(), s2.end());
	if (special!= -1)
		cout << s << (char)('a'+ special) << s2 << endl;
	else
		cout << s << s2 << endl;
}
int main(){
	string s;
	cin >> s;
	modify_pal(s);
	print();
	
	return 0;
}
