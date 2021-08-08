/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/24898050
 * Submitted at: 2021-08-09 00:46:48
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_d
 * Result: TLE
 * Execution Time: 2206 ms
 */

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

ll n;
ll2d Graph;
ll1d seen;

void dfs(ll now) {
  cout << (now + 1) << " ";
  loop(i, Graph[now].size()) {
    ll next_v = Graph[now][i];
    if (seen[next_v] == -1) {
      seen[next_v] = now;
      dfs(next_v);
      return;
    }
  }
  if (now == 0) { return; }
  else {
    dfs(seen[now]);
  }
}

int main() {
  cout << fixed << setprecision(15);
  cin >> n;
  Graph.resize(n);
  seen.assign(n, -1);
  loop(i, n - 1) {
    ll a, b;
    cin >> a >> b;
    Graph[--a].push_back(--b);
    Graph[b].push_back(a);
  }
  loop(i, n) { sort(all(Graph[i])); }
  seen[0] = -2;
  dfs(0);
  cout << endl;
  return 0;
}