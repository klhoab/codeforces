#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <cmath>
#include <bitset>
#include <vector>
#include <algorithm>
#include <map>
#include <cctype>
#include <set>
using namespace std;

typedef long long int ll;

ll a[10005], b[10005];
int main(){
    
    a[1]= 1;
    b[1]= 1;
    for (ll i=2;i<=10000; i++){
        a[i]= a[i-1]+ i;
        b[i]= a[i]+ b[i-1];
    }
    
    ll n;
    while (scanf("%lld", &n)==1){
        ll v= ((upper_bound(b+1, b+10001, n) - (b+1)));
        printf("%lld\n", v);
    }
    return 0;
}
