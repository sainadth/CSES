#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> dp(m + 1, 0);

    dp[0] = 1;
    int MOD = 1e9 + 7;

    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());

    for(int i = 1; i <= m; i++){
        for(int j = 0; (j < v.size()) && (v[j] <= i); j++){
            dp[i] += dp[i - v[j]];
            dp[i] %= MOD;
        }
    }
    cout << dp[m] << endl;
}   