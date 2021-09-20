/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26003874
 * Submitted at: 2021-09-20 11:28:13
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_ck
 * Result: AC
 * Execution Time: 8 ms
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
  string s;
  cin >> s;
  int now = 1;
  rep(i, s.size()) {
    if (s[i] == '+') {
      now++;
    }
    else if (s[i] == '-') {
      now--;
    }
  }
  cout << now << endl;
  return 0;
}