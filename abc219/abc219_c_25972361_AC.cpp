/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc219/submissions/25972361
 * Submitted at: 2021-09-19 11:51:55
 * Problem URL: https://atcoder.jp/contests/abc219/tasks/abc219_c
 * Result: AC
 * Execution Time: 131 ms
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

string x;
map<char, char> mp, mpinv;

string f(string s) {
  string tmp = "";
  rep(i, s.size()) {
    tmp += mp[s[i]];
  }
  return tmp;
}
string f_inv(string s) {
  string tmp = "";
  rep(i, s.size()) {
    tmp += mpinv[s[i]];
  }
  return tmp;
}

int main() {
  cout << fixed << setprecision(15);
  cin >> x;
  rep(i, 26) {
    mp[x[i]] = char(i + 'a');
    mpinv[char(i + 'a')] = x[i];
  }
  int n;
  cin >> n;
  vector<string> v;
  rep(i, n) {
    string s;
    cin >> s;
    v.push_back(f(s));
  }
  sort(all(v));
  rep(i, n) {
    cout << f_inv(v[i]) << endl;
  }
  return 0;
}