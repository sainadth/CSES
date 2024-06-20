#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a, b;
    cin >> a >> b;
    long long res = 1;
    int MOD = 1e9 + 7;
    while(b){
        if(b&1) res *= a;
        a *= a;
        a %= MOD;
        res %= MOD;
        b >>= 1;
    }
    cout << res << endl;
}

int main(){
    int te;
    cin >> te;
    for(int i = 0; i < te; i++)
        solve();
    return 0;
}