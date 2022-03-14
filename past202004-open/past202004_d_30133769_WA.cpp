/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/30133769
 * Submitted at: 2022-03-15 00:45:06
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_d
 * Result: WA
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
  rep(i, n) {
    string a = s.substr(i, 1);
    string b = s.substr(i, 2);
    string c = s.substr(i, 3);

    st.insert(a);
    if (i < n - 1) {
      string d = a + ".";
      string e = "." + a;
      st.merge(set<string>({ b, d, e }));
    }
    if (i < n - 2) {
      string f = ".." + a;
      string g = "." + a + ".";
      string h = a + "..";
      string i = "." + b;
      string j = { c[0], '.', c[2] };
      string k = b + ".";
      st.merge(set<string>({ c, f, g, h, i, j, k }));
    }
  }
  Debug(st);
  cout << st.size() << endl;
  return 0;
}