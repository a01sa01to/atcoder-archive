/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc042/submissions/27971831
 * Submitted at: 2021-12-19 00:07:44
 * Problem URL: https://atcoder.jp/contests/arc042/tasks/arc042_a
 * Result: AC
 * Execution Time: 182 ms
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
  stack<int> s;
  for (int i = n; i > 0; --i) s.push(i);
  rep(i, m) {
    int a;
    cin >> a;
    s.push(a);
  }
  vector<bool> used(n, false);
  while (!s.empty()) {
    int a = s.top();
    s.pop();
    if (used[a - 1]) continue;
    used[a - 1] = true;
    cout << a << endl;
  }
  return 0;
}