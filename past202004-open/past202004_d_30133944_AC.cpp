/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/30133944
 * Submitted at: 2022-03-15 00:58:30
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_d
 * Result: AC
 * Execution Time: 8 ms
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
  int n = s.size();
  set<string> st;
  st.insert(".");
  if (n >= 2) st.insert("..");
  if (n >= 3) st.insert("...");
  rep(k, 3) rep(i, n - k) {
    string t = s.substr(i, k + 1);
    // i文字だけ
    if (k == 0) st.insert(t);
    // 2文字
    else if (k == 1) {
      st.insert(t);
      st.insert({ t[0], '.' });
      st.insert({ '.', t[1] });
    }
    // 3文字
    else {
      st.insert(t);
      st.insert({ t[0], t[1], '.' });
      st.insert({ t[0], '.', t[2] });
      st.insert({ '.', t[1], t[2] });
      st.insert({ t[0], '.', '.' });
      st.insert({ '.', t[1], '.' });
      st.insert({ '.', '.', t[2] });
    }
  }
  Debug(st);
  cout << st.size() << endl;
  return 0;
}