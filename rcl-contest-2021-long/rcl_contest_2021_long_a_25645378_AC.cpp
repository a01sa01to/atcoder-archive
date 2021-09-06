/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021-long/submissions/25645378
 * Submitted at: 2021-09-06 13:07:36
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021-long/tasks/rcl_contest_2021_long_a
 * Result: AC
 * Execution Time: 31 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n, m, t;
  cin >> n >> m >> t;

  // data[i] = Start, End, Row, Column, Value, isGot
  // もともとStartについてソート済み
  ll2d data(m, ll1d(6));
  rep(i, m) {
    cin >> data[i][2] >> data[i][3] >> data[i][0] >> data[i][1] >> data[i][4];
  }
  ll now = 0;
  ll1d maximVal(6, -1);
  P nowPos = { -1, -1 };
  while (now < t) {
    rep(i, m) {
      if (data[i][0] <= now && now <= data[i][1]) {
        if (data[i][4] >= maximVal[4] && data[i][5] != 1) {
          maximVal = data[i];
          maximVal[5] = i;
        }
      }
    }
    now++;
    if (maximVal[0] == -1) {
      cout << -1 << endl;
    }
    else {
      if (nowPos.first == -1) {
        cout << maximVal[2] << " " << maximVal[3] << endl;
      }
      else {
        cout << nowPos.first << " " << nowPos.second << " " << maximVal[2] << " " << maximVal[3] << endl;
      }
      nowPos.first = maximVal[2];
      nowPos.second = maximVal[3];
      data[maximVal[5]][5] = 1;
    }
    maximVal.assign(5, -1);
  }
  return 0;
}