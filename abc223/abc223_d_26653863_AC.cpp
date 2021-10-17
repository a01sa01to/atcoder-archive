/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc223/submissions/26653863
 * Submitted at: 2021-10-17 22:45:25
 * Problem URL: https://atcoder.jp/contests/abc223/tasks/abc223_d
 * Result: AC
 * Execution Time: 162 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  // n: Vertex, m: Edge
  ll n, m;
  cin >> n >> m;
  ll2d Graph(n);
  rep(i, m) {
    ll a, b;
    cin >> a >> b;
    a--, b--;
    Graph[a].push_back(b);  // 有向グラフなので（0-indexed）
  }
  vector<ll> sorted;     // ソートされたのがここに入る
  vector<ll> deg_in(n);  // 入力次数
  rep(i, n) {
    for (auto next_v : Graph[i]) {
      deg_in[next_v]++;
    }
  }

  // 次数が0のものをpushする
  priority_queue<ll, vector<ll>, greater<ll>> que;
  rep(i, n) {
    if (deg_in[i] == 0) { que.push(i); }
  }
  while (!que.empty()) {
    ll v = que.top();
    que.pop();
    sorted.push_back(v);
    for (auto next_v : Graph[v]) {
      // v と next_v をつなぐ辺を削除（したようにする）
      deg_in[next_v]--;
      if (deg_in[next_v] == 0) { que.push(next_v); }
    }
  }

  // もし辺が1本でも残っていれば、サイクルがあるため、DAGではない
  bool isDAG = true;
  rep(i, n) {
    if (deg_in[i] != 0) { isDAG = false; }
  }
  if (!isDAG) {
    cout << -1 << endl;
  }
  else {
    rep(i, n) cout << sorted[i] + 1 << " ";
    cout << endl;
  }
  return 0;
}