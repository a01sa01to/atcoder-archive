/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc151/submissions/25360872
 * Submitted at: 2021-08-27 16:21:26
 * Problem URL: https://atcoder.jp/contests/abc151/tasks/abc151_c
 * Result: WA
 * Execution Time: 40 ms
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
  int ac = 0, pen = 0;
  rep(i, m) {
    int p;
    string s;
    cin >> p >> s;
    p--;
    if (s == "AC" && !sub[p]) {
      ac++;
      sub[p] = true;
    }
    else if (!sub[p]) {
      pen++;
    }
  }
  cout << ac << " " << pen << endl;
  return 0;
}