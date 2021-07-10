/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc209/submissions/24138951
 * Submitted at: 2021-07-10 22:19:19
 * Problem URL: https://atcoder.jp/contests/abc209/tasks/abc209_d
 * Result: AC
 * Execution Time: 295 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ull1d;
typedef vector<ull1d> ull2d;
typedef vector<ull2d> ull3d;

#define loop(i, n) for (ull i = 0; i < n; i++)
#define rloop(i, n) for (ll i = n - 1; i >= 0; i--)
#define all(vec) vec.begin(), vec.end()

ull2d Graph;
ull1d dp;
vector<bool> seen;

void dfs(ull i, ull c) {
  seen[i] = true;
  c++;
  for (ull x : Graph[i]) {
    if (seen[x]) { continue; }
    else {
      dp[x] = c;
      dfs(x, c);
    }
  }
}

int main() {
  cout << fixed << setprecision(15);
  ll n, q;
  cin >> n >> q;
  Graph.resize(n);
  dp.resize(n);
  seen.resize(n);
  loop(i, n - 1) {
    ll _, __;
    cin >> _ >> __;
    _--;
    __--;
    Graph[_].push_back(__);
    Graph[__].push_back(_);
  }
  dfs(0, 0);
  loop(i, q) {
    ull c, d;
    cin >> c >> d;
    if (abs(dp[--c] - dp[--d]) % 2 == 0) { cout << "Town" << endl; }
    else {
      cout << "Road" << endl;
    }
  }
  return 0;
}