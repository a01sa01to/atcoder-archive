/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc168/submissions/27949528
 * Submitted at: 2021-12-17 16:38:34
 * Problem URL: https://atcoder.jp/contests/abc168/tasks/abc168_d
 * Result: AC
 * Execution Time: 259 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n, m;
  cin >> n >> m;
  vector Graph(n, vector<int>(0));
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    Graph[a - 1].push_back(b - 1);
    Graph[b - 1].push_back(a - 1);
  }
  vector<int> dist(n, -1);
  queue<int> que;
  que.push(0);
  dist[0] = 0;
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (int next_v : Graph[v]) {
      if (dist[next_v] == -1) {
        dist[next_v] = v + 1;
        que.push(next_v);
      }
    }
  }
  puts("Yes");
  rep(i, n) {
    if (i == 0) continue;
    else
      cout << dist[i] << endl;
  }
  return 0;
}