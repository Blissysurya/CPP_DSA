#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for (int& i : a) cin >> i;
    for (int& i : b) cin >> i;

    vector<int> dp(n + 1);
    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        int ans = INT_MAX;
        ans = min(ans, dp[i] + a[i]);
        int mono = b[i];
        for (int j = i - 1; j >= 0; --j) {
            mono += b[j];
            ans = min(ans, dp[j] + mono);
        }
        dp[i + 1] = ans;
    }

    cout << dp[n] << '\n';

    return 0;
}