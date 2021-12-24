/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/28098831
 * Submitted at: 2021-12-25 01:28:45
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_d
 * Result: AC
 * Execution Time: 7 ms
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

int pow10(int x) {
  int ret = 1;
  rep(i, x) ret *= 10;
  return ret;
}

int main() {
  ll k;
  string s, t;
  cin >> k >> s >> t;
  ll wincnt = 0;
  vector<int> Tcnt(10, 0), Acnt(10, 0);
  rep(i, 4)++ Tcnt[s[i] - '0'], ++Acnt[t[i] - '0'];
  rep(i, 10) rep(j, 10) {
    if (i == 0 || j == 0) continue;
    int Tscore = 0, Ascore = 0;
    {
      ++Tcnt[i], ++Acnt[j];
      rep(_, 10) Tscore += _ * pow10(Tcnt[_]);
      rep(_, 10) Ascore += _ * pow10(Acnt[_]);
      --Tcnt[i], --Acnt[j];
    }
    if (Tcnt[i] + Acnt[i] + 1 + (i == j) > k || Tcnt[j] + Acnt[j] + 1 + (i == j) > k) "Do nothing";
    else if (Tscore > Ascore) wincnt += (k - (Tcnt[i] + Acnt[i])) * (k - (Tcnt[j] + Acnt[j]) - (i == j));
  }
  cout << fixed << setprecision(15) << ld(wincnt) / ld((9 * k - 8) * (9 * k - 9)) << endl;
  return 0;
}