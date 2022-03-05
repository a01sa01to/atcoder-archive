/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc242/submissions/29897876
 * Submitted at: 2022-03-05 22:35:21
 * Problem URL: https://atcoder.jp/contests/abc242/tasks/abc242_d
 * Result: WA
 * Execution Time: 249 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  int q;
  cin >> q;
  while (q--) {
    ll t, k;
    cin >> t >> k;
    --k;
    int i = 0;
    if (t <= 59) {
      i = k / (1LL << t);
      k %= (1LL << t);
    }
    vector<string> cand = { "ABBC", "BCCA", "CAAB" };
    cout << cand[((s[i] - 'A') + t + (k / 4)) % 3][k % 4] << endl;
  }
  return 0;
}