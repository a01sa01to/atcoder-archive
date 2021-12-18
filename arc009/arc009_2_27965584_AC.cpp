/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc009/submissions/27965584
 * Submitted at: 2021-12-18 17:33:00
 * Problem URL: https://atcoder.jp/contests/arc009/tasks/arc009_2
 * Result: AC
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  map<char, char> m, mi;
  rep(i, 10) {
    char c;
    cin >> c;
    m[c] = char('0' + i);
    mi['0' + i] = c;
  }
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) cin >> s[i];
  rep(i, n) {
    transform(s[i].begin(), s[i].end(), s[i].begin(), [&](char c) {
      return m[c];
    });
  }
  sort(s.begin(), s.end(), [](string& a, string& b) {
    return stoi(a) < stoi(b);
  });
  rep(i, n) {
    transform(s[i].begin(), s[i].end(), s[i].begin(), [&](char c) {
      return mi[c];
    });
    cout << s[i] << endl;
  }
  return 0;
}