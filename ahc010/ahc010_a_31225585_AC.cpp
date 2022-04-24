/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc010/submissions/31225585
 * Submitted at: 2022-04-24 15:05:52
 * Problem URL: https://atcoder.jp/contests/ahc010/tasks/ahc010_a
 * Result: AC
 * Execution Time: 1809 ms
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
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef vector<int> int_1d;
typedef vector<int_1d> int_2d;

constexpr int N = 30;
int_2d Board(N, int_1d(N, 0));

inline int random_int(int l, int r) {
  auto rd = random_device();
  auto mt = mt19937(rd());
  uniform_int_distribution<int> dist(l, r);
  return dist(mt);
}

inline string neighbor(string now) {
  return "";
}

inline ll calcState() {
  return 0;
}

int main() {
  auto start = chrono::system_clock::now();

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  rep(i, N) {
    string s;
    cin >> s;
    rep(j, N) Board[i][j] = s[j] - '0';
  }
  string ans = "";
  rep(_, N * N) ans += "0";

  while (true) {
    auto now = chrono::system_clock::now();
    if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 1800) break;
  }
  cout << ans << endl;
  return 0;
}