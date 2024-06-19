#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> dp(m + 1, INT_MAX);

    dp[0] = 0;

    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());

    for(int i = 1; i <= m; i++){
        for(int j = 0; (j < v.size()) && (v[j] <= i); j++){
            if(dp[i - v[j]] != INT_MAX)
                dp[i] = min(dp[i], 1 + dp[i - v[j]]);
        }
    }
    cout << ((dp[m] == INT_MAX) ? -1 : dp[m]) << endl;
}