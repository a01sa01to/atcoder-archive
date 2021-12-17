/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/digitalarts2012/submissions/27949842
 * Submitted at: 2021-12-17 16:56:37
 * Problem URL: https://atcoder.jp/contests/digitalarts2012/tasks/digitalarts_1
 * Result: AC
 * Execution Time: 8 ms
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
  string _s;
  getline(cin, _s);
  vector<string> s;
  {
    string t = "";
    rep(i, _s.size()) {
      if (_s[i] == ' ') {
        s.push_back(t);
        t = "";
      }
      else {
        t += _s[i];
      }
    }
    s.push_back(t);
  }
  int n;
  cin >> n;
  vector<string> filt(n);
  rep(i, n) cin >> filt[i];
  rep(i, n) {
    string f = filt[i];
    rep(j, s.size()) {
      if (s[j].size() != f.size()) continue;
      bool chk = true;
      rep(k, f.size()) {
        if (f[k] != '*' && f[k] != s[j][k]) chk = false;
      }
      if (chk) rep(k, s[j].size()) s[j][k] = '*';
    }
  }
  rep(i, s.size()) {
    cout << s[i] << (i == s.size() - 1 ? "\n" : " ");
  }
  return 0;
}