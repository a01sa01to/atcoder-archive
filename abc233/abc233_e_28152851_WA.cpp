/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28152851
 * Submitted at: 2021-12-26 00:04:44
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_e
 * Result: WA
 * Execution Time: 2205 ms
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

string pls(string& s, string& t) {
  string res = "";
  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());
  bool kuriagari = false;
  rep(i, s.size()) {
    int tmp = (s[i] - '0');
    if (i < t.size()) tmp += (t[i] - '0');
    if (kuriagari) {
      ++tmp;
      kuriagari = false;
    }
    if (tmp >= 10) {
      kuriagari = true;
      tmp -= 10;
    }
    res += to_string(tmp);
  }
  if (kuriagari) res += "1";
  reverse(res.begin(), res.end());
  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());
  return res;
}

int main() {
  string s;
  cin >> s;
  string ans = s;
  for (int i = 1; i <= 100; ++i) {
    if (s.empty()) break;
    s.pop_back();
    ans = pls(ans, s);
    // cout << "[DEBUG] " << ans << endl;
  }
  cout << ans << endl;
  return 0;
}