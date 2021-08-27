/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2016-quala/submissions/25366955
 * Submitted at: 2021-08-27 23:19:47
 * Problem URL: https://atcoder.jp/contests/code-festival-2016-quala/tasks/codefestival_2016_qualA_b
 * Result: AC
 * Execution Time: 33 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  ll1d likes(n);
  rep(i, n) {
    int a;
    cin >> a;
    likes[i] = --a;
  }
  int ans = 0;
  rep(i, n) {
    if (likes[likes[i]] == i) {
      ans++;
    }
  }
  cout << ans / 2 << endl;
  return 0;
}