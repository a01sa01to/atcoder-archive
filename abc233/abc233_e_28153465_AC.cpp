/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc233/submissions/28153465
 * Submitted at: 2021-12-26 00:30:06
 * Problem URL: https://atcoder.jp/contests/abc233/tasks/abc233_e
 * Result: AC
 * Execution Time: 49 ms
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
  string s;
  cin >> s;
  string ans = "";
  reverse(s.begin(), s.end());
  int kuriagari = 0, sum = 0;
  rep(i, s.size()) sum += s[i] - '0';
  rep(i, s.size()) {
    ans += to_string((sum + kuriagari) % 10);
    kuriagari = (sum + kuriagari) / 10;
    sum -= s[i] - '0';
  }
  if (kuriagari != 0) ans += to_string(kuriagari);
  reverse(ans.begin(), ans.end());

  cout << ans << endl;
  return 0;
}