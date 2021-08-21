/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc215/submissions/25211303
 * Submitted at: 2021-08-21 21:13:49
 * Problem URL: https://atcoder.jp/contests/abc215/tasks/abc215_c
 * Result: AC
 * Execution Time: 17 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  string s;
  ll k;
  cin >> s >> k;
  sort(all(s));
  vector<string> v;
  int n = s.size();
  do {
    string a = "";
    rep(i, n) {
      a += s[i];
    }
    v.push_back(a);
  } while (next_permutation(all(s)));
  sort(all(v));
  cout << v[k - 1] << endl;
  return 0;
}