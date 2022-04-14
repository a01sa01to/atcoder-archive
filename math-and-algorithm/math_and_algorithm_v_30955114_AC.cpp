/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30955114
 * Submitted at: 2022-04-14 10:28:50
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_v
 * Result: AC
 * Execution Time: 49 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  constexpr int Upper = 100000;
  vector<ll> cnt(Upper, 0);
  rep(i, n) cnt[a[i]]++;
  ll ans = 0;
  rep(i, n) {
    cnt[a[i]]--;
    ans += cnt[Upper - a[i]];
  }
  cout << ans << endl;
  return 0;
}