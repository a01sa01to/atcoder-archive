/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc006/submissions/27979013
 * Submitted at: 2021-12-19 16:28:42
 * Problem URL: https://atcoder.jp/contests/arc006/tasks/arc006_2
 * Result: AC
 * Execution Time: 9 ms
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
  int n, l;
  cin >> n >> l;
  string ign;
  getline(cin, ign);
  vector<string> s(l);
  rep(i, l) getline(cin, s[i]);
  string a;
  getline(cin, a);
  int now;
  rep(i, 2 * n - 1) {
    if (a[i] == 'o') {
      now = i / 2;
      break;
    }
  }
  reverse(s.begin(), s.end());
  rep(i, l) rep(j, 2 * n - 1) {
    if (s[i][j] == '|') continue;
    else if (s[i][j] == '-') {
      if ((j - 1) / 2 == now) ++now;
      else if ((j + 1) / 2 == now) --now;
    }
  }
  cout << now + 1 << endl;
  return 0;
}