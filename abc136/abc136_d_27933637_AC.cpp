/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/27933637
 * Submitted at: 2021-12-16 12:00:47
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_d
 * Result: AC
 * Execution Time: 26 ms
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
  string s;
  cin >> s;
  int n = s.size();
  vector<int> ans(n, 0);
  vector<pair<int, string>> v;
  char prev = 'R';
  string t = "";
  rep(i, n) {
    if (s[i] == prev) {
      t.push_back(s[i]);
    }
    else if (s[i] == 'L') {
      t.push_back(s[i]);
      prev = 'L';
    }
    else {
      v.push_back(make_pair(i, t));
      t = "";
      prev = 'R';
      t.push_back(s[i]);
    }
  }
  v.push_back(make_pair(n, t));

  // cout << "[DEB] ";
  // rep(i, v.size()) {
  //   cout << v[i].second << " ";
  // }

  cout << endl;
  rep(i, v.size()) {
    rep(j, v[i].second.size() - 1) {
      if (v[i].second[j] == 'R' && v[i].second[j + 1] == 'L') {
        int _i = v[i].first - v[i].second.size() + j;
        ans[_i] = ans[_i + 1] = v[i].second.size() / 2;
        if (j % 2 == 0 && v[i].second.size() % 2 != 0) ++ans[_i];
        else if (v[i].second.size() % 2 != 0)
          ++ans[_i + 1];
        break;
      }
    }
  }
  for (auto a : ans) cout << a << " ";
  cout << endl;
  return 0;
}