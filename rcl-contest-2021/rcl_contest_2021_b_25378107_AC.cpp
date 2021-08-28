/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021/submissions/25378107
 * Submitted at: 2021-08-28 16:15:19
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021/tasks/rcl_contest_2021_b
 * Result: AC
 * Execution Time: 11 ms
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
  rep(i, n) {
    rep(j, n) {
      if (i % 2) {
        cout << (j % 2 ? 1 : 0) << " ";
      }
      else {
        cout << (j % 2 ? 0 : 1) << " ";
      }
    }
    cout << endl;
  }
  return 0;
}