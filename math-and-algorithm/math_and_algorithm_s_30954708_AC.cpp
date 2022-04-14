/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954708
 * Submitted at: 2022-04-14 09:47:21
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_s
 * Result: AC
 * Execution Time: 58 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

ll Combi(ll n) {
  return n * (n - 1) / 2;
}

int main() {
  int n;
  cin >> n;
  vector<ll> cnt(3, 0);
  rep(i, n) {
    int a;
    cin >> a;
    ++cnt[a - 1];
  }
  cout << Combi(cnt[0]) + Combi(cnt[1]) + Combi(cnt[2]) << endl;
  return 0;
}