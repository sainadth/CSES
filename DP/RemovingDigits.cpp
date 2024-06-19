#include <bits/stdc++.h>
using namespace std;

int maxDig(int n){
    int maxy = 0;
    while(n){
        maxy = max(maxy, n % 10);
        n /= 10;
    }
    return maxy;
}

int main() {
    int n;
    cin >> n;

    int MOD = 1e9 + 7;
    int res = 0;
    while(n){
        n -= maxDig(n);
        res++;
        res %= MOD;
    }
    cout << res << endl;
}