/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/cf17-final/submissions/27802825
 * Submitted at: 2021-12-11 10:50:41
 * Problem URL: https://atcoder.jp/contests/cf17-final/tasks/cf17_final_b
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string s;
  cin >> s;
  vector<int> cnt(3, 0);
  rep(i, s.size())++ cnt[s[i] - 'a'];
  bool chk = true;
  rep(i, 3) chk &= abs(cnt[i] - cnt[(i + 1) % 3]) <= 1;
  puts(chk ? "YES" : "NO");
  return 0;
}