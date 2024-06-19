#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int res = 1;
    int MOD = 1e9 + 7;
    while(n --){
        res <<= 1;
        res %= MOD;
    }
    cout << res << endl;
}