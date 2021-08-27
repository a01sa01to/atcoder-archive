/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc145/submissions/25362567
 * Submitted at: 2021-08-27 18:05:12
 * Problem URL: https://atcoder.jp/contests/abc145/tasks/abc145_c
 * Result: AC
 * Execution Time: 9 ms
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

typedef modint1000000007 mint;

int factorize(int n) {
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<P> pos(n);
  vector<int> perm(n);
  rep(i, n) {
    cin >> pos[i].first >> pos[i].second;
    perm[i] = i;
  }
  double ans = 0;
  int fact = factorize(n);
  do {
    rep(i, n - 1) {
      double dist = sqrt(pow(pos[perm[i]].first - pos[perm[i + 1]].first, 2) + pow(pos[perm[i]].second - pos[perm[i + 1]].second, 2));
      ans += dist;
    }
  } while (next_permutation(all(perm)));
  cout << ans / fact << endl;
  return 0;
}