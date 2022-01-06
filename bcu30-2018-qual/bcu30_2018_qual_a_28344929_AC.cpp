/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/bcu30-2018-qual/submissions/28344929
 * Submitted at: 2022-01-06 11:20:39
 * Problem URL: https://atcoder.jp/contests/bcu30-2018-qual/tasks/bcu30_2018_qual_a
 * Result: AC
 * Execution Time: 28 ms
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> cnt(30, 0);
  rep(i, n) {
    int a;
    cin >> a;
    ++cnt[a];
  }
  rep(i, 30) cout << cnt[i] << " ";
  cout << endl;
  return 0;
}