/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/26021862
 * Submitted at: 2021-09-21 10:52:46
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_g
 * Result: AC
 * Execution Time: 68 ms
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
  cout << fixed << setprecision(15);
  // n: Vertex, m: Edge
  ll n, m;
  cin >> n >> m;
  ll2d Graph(n);
  rep(i, m) {
    ll x, y;
    cin >> x >> y;
    Graph[--x].push_back(--y);  // 有向グラフなので（0-indexed）
  }
  ll1d sorted;     // ソートされたのがここに入る
  ll1d deg_in(n);  // 入力次数
  rep(i, n) {
    for (auto next_v : Graph[i]) {
      deg_in[next_v]++;
    }
  }

  // 次数が0のものをpushする
  queue<ll> que;
  rep(i, n) {
    if (deg_in[i] == 0) { que.push(i); }
  }
  while (!que.empty()) {
    ll v = que.front();
    que.pop();
    sorted.push_back(v);
    for (auto next_v : Graph[v]) {
      // v と next_v をつなぐ辺を削除（したようにする）
      deg_in[next_v]--;
      if (deg_in[next_v] == 0) { que.push(next_v); }
    }
  }
  reverse(all(sorted));
  ll1d dp(n, 0);
  rep(i, n) {
    ll v = sorted[i];
    if (Graph[v].size() == 0) dp[v] = 0;
    else {
      rep(j, Graph[v].size()) {
        dp[v] = max(dp[v], dp[Graph[v][j]] + 1);
      }
    }
  }
  cout << *max_element(all(dp)) << endl;
  return 0;
}