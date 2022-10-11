/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc150/submissions/35585004
 * Submitted at: 2022-10-11 17:17:55
 * Problem URL: https://atcoder.jp/contests/arc150/tasks/arc150_a
 * Result: WA
 * Execution Time: 52 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  int first1 = -1, last1 = -1;
  rep(i, n) {
    if (first1 == -1 && s[i] == '1') first1 = i;
    if (s[i] == '1') last1 = i;
  }
  ++last1;
  Debug(last1, first1);
  if (last1 - first1 > k) {
    cout << "No" << endl;
    return;
  }

  vector cnt(3, vector<int>(n + 1, 0));
  rep(i, n) {
    cnt[0][i + 1] = cnt[0][i] + (s[i] == '0');
    cnt[1][i + 1] = cnt[1][i] + (s[i] == '1');
    cnt[2][i + 1] = cnt[2][i] + (s[i] == '?');
  }

  int ans = 0;
  rep(l, n - k) {
    int r = l + k;
    if (first1 < l || last1 > r) continue;
    int cnt0 = cnt[0][r] - cnt[0][l];
    int cnt1 = cnt[1][r] - cnt[1][l];
    int cntq = cnt[2][r] - cnt[2][l];
    if (cnt0 == 0 && cnt1 + cntq == k) {
      ans++;
    }
  }
  cout << (ans == 1 ? "Yes" : "No") << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
  return 0;
}