/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202010-open/submissions/31270555
 * Submitted at: 2022-04-26 00:22:18
 * Problem URL: https://atcoder.jp/contests/past202010-open/tasks/past202010_f
 * Result: AC
 * Execution Time: 88 ms
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

int main() {
  int n, k;
  cin >> n >> k;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    mp[s]++;
  }

  vector<int> ke;
  map<int, vector<string>> v;
  for (auto [key, val] : mp) {
    ke.push_back(val);
    v[val].push_back(key);
  }
  sort(ke.rbegin(), ke.rend());
  if (v[ke[k - 1]].size() > 1) {
    cout << "AMBIGUOUS" << endl;
  }
  else {
    cout << v[ke[k - 1]].front() << endl;
  }
  return 0;
}