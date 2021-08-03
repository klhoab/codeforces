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

struct score{
    ll  a, b;
    bool operator< (const score &r) const{
        return (b<r.b ||( b==r.b && a<r.a));
    }
};
int main(){
    ll  n, r, avg, total, ans, a, b;
    
    cin>> n >> r >> avg;
    
    vector<score> v;
    total=0;
    ans= 0;
    for (ll i=0;i<n;i++){
        cin >> a >> b;
        v.push_back( (score){a, b});
        total+= a;
    }
    
    if (total>= avg*n){
        cout<< "0" << endl;
    }
    else{
        ll diff= avg*n- total;
        ans= 0;
        sort(v.begin(), v.end());
        
        for (ll i=0;i<n && diff>0;i++){
            
            if (v[i].a < r){
                ll t= min(diff, r- v[i].a);
                ans+= v[i].b* t;
                diff-= t;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}
