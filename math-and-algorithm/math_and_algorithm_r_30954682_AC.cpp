/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/30954682
 * Submitted at: 2022-04-14 09:44:36
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_r
 * Result: AC
 * Execution Time: 32 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<ll> cnt(4, 0);
  rep(i, n) {
    int a;
    cin >> a;
    ++cnt[(a - 1) / 100];
  }
  cout << cnt[3] * cnt[0] + cnt[2] * cnt[1] << endl;
  return 0;
}