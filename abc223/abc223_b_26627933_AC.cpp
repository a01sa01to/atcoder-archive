/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc223/submissions/26627933
 * Submitted at: 2021-10-17 21:04:59
 * Problem URL: https://atcoder.jp/contests/abc223/tasks/abc223_b
 * Result: AC
 * Execution Time: 10 ms
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
  vector<string> v;
  rep(i, s.size()) {
    v.push_back(s);
    s = s.substr(1) + s.front();
  }
  sort(all(v));
  cout << v.front() << endl
       << v.back() << endl;
  return 0;
}