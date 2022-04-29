/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/31336311
 * Submitted at: 2022-04-29 14:07:15
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_b
 * Result: AC
 * Execution Time: 42 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Vi = vector<int>;
using Vd = vector<double>;
using Vs = vector<string>;
using Vc = vector<char>;
using Vll = vector<ll>;
using Pii = pair<int, int>;
using Pdd = pair<double, double>;
using Pll = pair<ll, ll>;
using Pis = pair<int, string>;
using Psi = pair<string, int>;
using Pss = pair<string, string>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, n, m) for (int i = (int)(n); i < (int)(m); i++)
 
int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    Vi h(n);
    rep(i, n) cin >> h[i];
    Vi dp(n, 2e9);
    dp[0] = 0;
    dp[1] = abs(h[1] - h[0]);
    rep(i, n){
        for (int j = 1; j <= k; j++){
            if (i - j >= 0){
                int temp = dp[i - j] + abs(h[i] - h[i - j]);
                dp[i] = min(dp[i], temp);
            }
            else break;
        }
    }
    cout << dp[n - 1] << endl;
    return 0;
}

