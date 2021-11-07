/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc226/submissions/27116828
 * Submitted at: 2021-11-07 23:03:44
 * Problem URL: https://atcoder.jp/contests/abc226/tasks/abc226_a
 * Result: AC
 * Execution Time: 13 ms
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
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  string s;
  cin >> s;
  s.pop_back();
  s.pop_back();
  bool chk = true;
  if (s.back() - '0' <= 4) chk = false;
  s.pop_back();
  s.pop_back();
  cout << stoi(s) + chk << endl;
  return 0;
}