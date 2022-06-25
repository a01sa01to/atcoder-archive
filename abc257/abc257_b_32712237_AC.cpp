/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc257/submissions/32712237
 * Submitted at: 2022-06-25 21:05:54
 * Problem URL: https://atcoder.jp/contests/abc257/tasks/abc257_b
 * Result: AC
 * Execution Time: 8 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> a(k);
  vector<int> cnt(n, 0);
  rep(i, k) {
    cin >> a[i];
    --a[i];
    cnt[a[i]]++;
  }
  while (q--) {
    int l;
    cin >> l;
    --l;
    if (a[l] + 1 == n || cnt[a[l] + 1]) {
      // do nothing
    }
    else {
      cnt[a[l]]--;
      a[l]++;
      cnt[a[l]]++;
    }
    Debug(a, cnt);
  }
  rep(i, k) cout << a[i] + 1 << " ";
  cout << endl;
  return 0;
}