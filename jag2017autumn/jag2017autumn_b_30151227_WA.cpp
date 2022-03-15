/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jag2017autumn/submissions/30151227
 * Submitted at: 2022-03-15 22:48:50
 * Problem URL: https://atcoder.jp/contests/jag2017autumn/tasks/jag2017autumn_b
 * Result: WA
 * Execution Time: 5 ms
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
  int n = 0;
  rep(i, s.size()) if (s[i] != '[' && s[i] != ']' && s[i] != '-')++ n;
  map<char, int> mp;
  rep(i, n) {
    char a;
    int v;
    cin >> a >> v;
    mp[a] = v;
  }
  while (s.size() > 1) {
    string t = "";
    rep(i, s.size()) {
      if (i >= s.size() - 4) {
        t.push_back(s[i]);
        continue;
      }
      string u = s.substr(i, 5);
      if (u[0] == '[' && u[4] == ']') {
        if (mp[u[1]] != 0 && mp[u[3]] != 0) {
          cout << "No" << endl;
          return 0;
        }
        if (mp[u[1]] == 0 && mp[u[3]] == 0) {
          cout << "No" << endl;
          return 0;
        }
        if (mp[u[1]]--) t.push_back(u[1]);
        if (mp[u[3]]--) t.push_back(u[3]);
        i += 4;
      }
      else
        t.push_back(s[i]);
    }
    swap(s, t);
    Debug(s);
  }
  cout << "Yes" << endl;
  return 0;
}