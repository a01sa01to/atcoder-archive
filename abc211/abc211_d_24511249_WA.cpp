/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/24511249
 * Submitted at: 2021-07-24 22:15:10
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_d
 * Result: WA
 * Execution Time: 2207 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

typedef modint1000000007 mint;

ll2d Graph;
ll1d cost;
int n;

void dfs(ll v, ll c) {
  cost[v] = c;

  for (ll next_v : Graph[v]) {
    if (cost[next_v] <= c) continue;
    dfs(next_v, c + 1);
  }
}

int main() {
  cout << fixed << setprecision(15);
  int m;
  cin >> n >> m;
  Graph.resize(n);
  cost.resize(n);
  dsu d(n);
  loop(_, m) {
    int a, b;
    cin >> a >> b;
    Graph[--a].push_back(--b);
    Graph[b].push_back(a);
    d.merge(a, b);
  }
  cost.assign(n, 1e10);
  dfs(0, 0);
  if (!d.same(0, n - 1)) {
    cout << 0 << endl;
    return 0;
  }
  ll mcost = cost[n - 1];
  ll1d c(mcost + 1, 0);
  loop(i, n) {
    if (cost[i] > mcost) {
      continue;
    }
    c[cost[i]]++;
  }
  mint ans = 1;
  loop(i, mcost) {
    ans *= c[mcost - i - 1];
  }
  cout << ans.val() << endl;
  return 0;
}