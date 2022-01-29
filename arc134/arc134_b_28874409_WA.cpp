/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc134/submissions/28874409
 * Submitted at: 2022-01-29 22:37:44
 * Problem URL: https://atcoder.jp/contests/arc134/tasks/arc134_b
 * Result: WA
 * Execution Time: 61 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
#else
  #define Debug(x) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void changeJ(vector<set<int>>& cnt, int prev, int& j) {
  j = -1;
  rep(i, 26) {
    if (j == -1 && cnt[i].size() > 0) {
      int tmp = *cnt[i].rbegin();
      if (tmp < prev) {
        j = tmp;
        return;
      }
    }
  }
}

int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector cnt(26, set<int>());
  rep(i, n) {
    cnt[s[i] - 'a'].insert(i);
  }
  int i = 0, j = -1;
  changeJ(cnt, 1e9, j);
  while (i < j) {
    if (s[i] > s[j]) {
      cnt[s[i] - 'a'].erase(i);
      cnt[s[j] - 'a'].erase(j);
      swap(s[i], s[j]);
      changeJ(cnt, j, j);
      ++i;
    }
    else {
      cnt[s[i] - 'a'].erase(i);
      ++i;
    }
    Debug(make_pair(i, j));
    Debug(s);
  }
  cout << s << endl;
  return 0;
}