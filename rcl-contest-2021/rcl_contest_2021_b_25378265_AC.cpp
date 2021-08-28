/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021/submissions/25378265
 * Submitted at: 2021-08-28 16:20:22
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021/tasks/rcl_contest_2021_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int n;
ll2d E;
// vector<vector<bool>> canSeat;

// void setSeat(ll i,ll j,ll p){

// }

int main() {
  cout << fixed << setprecision(15);
  cin >> n;
  E.resize(n);
  rep(i, n) {
    E[i].resize(n);
    rep(j, n) {
      cin >> E[i][j];
    }
  }
  ll ans1 = 0, ans2 = 0;
  rep(i, n) {
    rep(j, n) {
      if (i % 2) {
        if (j % 2) ans1 += E[i][j];
        else
          ans2 += E[i][j];
      }
      else {
        if (j % 2) ans2 += E[i][j];
        else
          ans1 += E[i][j];
      }
    }
  }
  rep(i, n) {
    rep(j, n) {
      if (i % 2) {
        if (ans1 >= ans2) {
          cout << (j % 2 ? 1 : 0) << " ";
        }
        else {
          cout << (j % 2 ? 0 : 1) << " ";
        }
      }
      else {
        if (ans1 >= ans2) {
          cout << (j % 2 ? 0 : 1) << " ";
        }
        else {
          cout << (j % 2 ? 1 : 0) << " ";
        }
      }
    }
    cout << endl;
  }
  return 0;
}