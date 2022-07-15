/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc218/submissions/33231590
 * Submitted at: 2022-07-15 12:39:11
 * Problem URL: https://atcoder.jp/contests/abc218/tasks/abc218_c
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

vector<vector<bool>> compress(vector<vector<bool>> c) {
  int n = c.size();
  queue<vector<bool>> q1, q2;
  rep(i, n) {
    bool isAllWhite = true;
    rep(j, n) {
      if (c[i][j] == true) isAllWhite = false;
    }
    if (isAllWhite) q1.push(c[i]);
    else {
      for (int j = i; j < n; j++) {
        q2.push(c[j]);
      }
      break;
    }
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
  vector tmp(n, vector<bool>(n));
  rep(i, n) rep(j, n) {
    tmp[j][i] = c[i][j];
  }
  rep(i, n) {
    bool isAllWhite = true;
    rep(j, n) {
      if (tmp[i][j] == true) isAllWhite = false;
    }
    if (isAllWhite) q1.push(tmp[i]);
    else {
      for (int j = i; j < n; j++) {
        q2.push(tmp[j]);
      }
      break;
    }
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

void print(const string& name, const vector<vector<bool>>& c) {
  cout << "[Debug] " << name << endl;
  rep(i, c.size()) {
    rep(j, c[i].size()) {
      cout << (c[i][j] ? "#" : ".");
    }
    cout << endl;
  }
  cout << "-----" << endl;
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  vector s1(n, vector<bool>(n)), s2(n, vector<bool>(n)), s3(n, vector<bool>(n)), s4(n, vector<bool>(n)), t(n, vector<bool>(n));
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
    s2[j][n - i - 1] = s1[i][j];
    s3[n - i - 1][n - j - 1] = s1[i][j];
    s4[n - j - 1][i] = s1[i][j];
  }
  // print("s1", s1);
  // print("s2", s2);
  // print("s3", s3);
  // print("s4", s4);
  // print("t", t);
  s1 = compress(s1);
  s2 = compress(s2);
  s3 = compress(s3);
  s4 = compress(s4);
  t = compress(t);
  // print("compressed s1", s1);
  // print("compressed s2", s2);
  // print("compressed s3", s3);
  // print("compressed s4", s4);
  // print("compressed t", t);
  if (s1 == t || s2 == t || s3 == t || s4 == t) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}