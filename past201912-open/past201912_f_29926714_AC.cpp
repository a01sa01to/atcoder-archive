/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past201912-open/submissions/29926714
 * Submitted at: 2022-03-07 00:00:06
 * Problem URL: https://atcoder.jp/contests/past201912-open/tasks/past201912_f
 * Result: AC
 * Execution Time: 42 ms
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
  string s;
  cin >> s;
  string t = "";
  vector<string> ans;
  bool f = false;
  rep(i, s.size()) {
    t += s[i];
    if (f && isupper(s[i])) {
      ans.push_back(t);
      t = "";
      f = false;
    }
    else if (isupper(s[i])) {
      f = true;
    }
  }
  sort(ans.begin(), ans.end(), [](auto a, auto b) {
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    return a < b;
  });
  for (auto x : ans) {
    cout << x;
  }
  cout << endl;
  return 0;
}