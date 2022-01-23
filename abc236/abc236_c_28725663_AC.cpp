/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc236/submissions/28725663
 * Submitted at: 2022-01-23 21:04:48
 * Problem URL: https://atcoder.jp/contests/abc236/tasks/abc236_c
 * Result: AC
 * Execution Time: 299 ms
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
  int n, m;
  cin >> n >> m;
  vector<string> s;
  set<string> t;
  rep(i, n) {
    string a;
    cin >> a;
    s.push_back(a);
  }
  rep(i, m) {
    string a;
    cin >> a;
    t.insert(a);
  }
  rep(i, n) {
    string a = s[i];
    cout << (t.count(a) ? "Yes" : "No") << endl;
  }
  return 0;
}