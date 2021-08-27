/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/25360969
 * Submitted at: 2021-08-27 16:25:51
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_c
 * Result: AC
 * Execution Time: 45 ms
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

int main() {
  cout << fixed << setprecision(15);
  int n, m;
  cin >> n >> m;
  vector<bool> sub(n, false);
  vector<int> wa(n, 0);
  int ac = 0, pen = 0;
  rep(i, m) {
    int p;
    string s;
    cin >> p >> s;
    p--;
    if (s == "AC" && !sub[p]) {
      ac++;
      sub[p] = true;
      pen += wa[p];
    }
    else if (!sub[p]) {
      wa[p]++;
    }
  }
  cout << ac << " " << pen << endl;
  return 0;
}