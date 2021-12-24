/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/28098701
 * Submitted at: 2021-12-25 01:14:51
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_d
 * Result: WA
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

int pow10(int x) {
  int ret = 1;
  rep(i, x) ret *= 10;
  return ret;
}

int main() {
  int k;
  string s, t;
  cin >> k >> s >> t;

  // ans: 正=勝ち, 負=負け, 0=存在しない
  vector ans(10, vector<ld>(10, 0));
  vector<int> Tcnt(10, 0), Acnt(10, 0);
  rep(i, 4)++ Tcnt[s[i] - '0'], ++Acnt[t[i] - '0'];
  rep(i, 10) rep(j, 10) {
    if (i == 0 || j == 0) continue;
    ld prob = (ld(k - (Tcnt[i] + Acnt[i])) / (9 * k - 8)) * (ld(k - (Tcnt[j] + Acnt[j])) / (9 * k - 9));
    ++Tcnt[i], ++Acnt[j];
    if (Tcnt[i] + Acnt[i] > k || Tcnt[j] + Acnt[j] > k) ans[i][j] = 0;
    else {
      int Tscore = 0, Ascore = 0;
      rep(_, 10) Tscore += _ * pow10(Tcnt[_]);
      rep(_, 10) Ascore += _ * pow10(Acnt[_]);

      if (Tscore > Ascore) ans[i][j] = prob;
      else
        ans[i][j] = -prob;
    }
    --Tcnt[i], --Acnt[j];
  }
  ld sum = 0;
  rep(i, 10) rep(j, 10) if (ans[i][j] > 0) sum += ans[i][j];
  // cout << "[DEBUG] ans" << endl;
  // rep(i, 10) {
  //   rep(j, 10) printf("%.2Lf ", ans[i][j]);
  //   cout << endl;
  // }
  cout << fixed << setprecision(15) << min(ld(1), max(ld(0), sum)) << endl;
  return 0;
}