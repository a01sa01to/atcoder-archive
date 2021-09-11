/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/25765387
 * Submitted at: 2021-09-11 21:34:32
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_c
 * Result: WA
 * Execution Time: 12 ms
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

vector<vector<bool>> compress(vector<vector<bool>> c) {
  int n = c.size();
  queue<vector<bool>> q1, q2;
  rep(i, n) {
    bool isAllWhite = true;
    rep(j, n) {
      if (c[i][j] == true) isAllWhite = false;
    }
    if (isAllWhite) q1.push(c[i]);
    else
      q2.push(c[i]);
  }
  c.resize(0);
  while (!q2.empty()) {
    c.push_back(q2.front());
    q2.pop();
  }
  while (!q1.empty()) {
    c.push_back(q1.front());
    q1.pop();
  }
  vector<vector<bool>> tmp(n, vector<bool>(n));
  rep(i, n) rep(j, n) {
    tmp[j][i] = c[i][j];
  }
  rep(i, n) {
    bool isAllWhite = true;
    rep(j, n) {
      if (tmp[i][j] == true) isAllWhite = false;
    }
    if (isAllWhite) q1.push(tmp[i]);
    else
      q2.push(tmp[i]);
  }
  c.resize(0);
  while (!q2.empty()) {
    c.push_back(q2.front());
    q2.pop();
  }
  while (!q1.empty()) {
    c.push_back(q1.front());
    q1.pop();
  }
  return c;
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector<vector<bool>> s1(n, vector<bool>(n)), s2(n, vector<bool>(n)), s3(n, vector<bool>(n)), s4(n, vector<bool>(n)), t(n, vector<bool>(n));
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, n) { s1[i][j] = (s[j] == '#'); }
  }
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, n) { t[i][j] = (s[j] == '#'); }
  }
  rep(i, n) rep(j, n) {
    s2[j][i] = s1[i][j];
    s3[n - i - 1][n - j - 1] = s1[i][j];
    s4[n - j - 1][n - i - 1] = s1[i][j];
  }
  s1 = compress(s1);
  s2 = compress(s2);
  s3 = compress(s3);
  s4 = compress(s4);
  t = compress(t);
  if (s1 == t || s2 == t || s3 == t || s4 == t) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}