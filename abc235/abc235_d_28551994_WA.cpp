/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc235/submissions/28551994
 * Submitted at: 2022-01-15 21:42:37
 * Problem URL: https://atcoder.jp/contests/abc235/tasks/abc235_d
 * Result: WA
 * Execution Time: 10 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, n;
  cin >> a >> n;
  vector<int> v(1e6, -1);
  v[n] = 0;
  queue<int> q;
  q.push(n);
  while (!q.empty()) {
    auto x = q.front();
    q.pop();
    if (x % a == 0 && v[x / a] == -1) {
      v[x / a] = v[x] + 1;
      q.push(x / a);
    }
    if (x >= 10) {
      string t = to_string(x);
      if (t[0] != '0') {
        t.push_back(t[0]);
        int tmp = stoi(t.substr(1));
        if (v[tmp] == -1) {
          v[tmp] = v[x] + 1;
          q.push(tmp);
        }
      }
    }
  }
  cout << v[1] << endl;
  return 0;
}