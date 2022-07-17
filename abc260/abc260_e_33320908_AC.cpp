/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc260/submissions/33320908
 * Submitted at: 2022-07-17 22:39:37
 * Problem URL: https://atcoder.jp/contests/abc260/tasks/abc260_e
 * Result: AC
 * Execution Time: 585 ms
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

int main() {
  int n, m;
  cin >> n >> m;
  vector v(m, set<int>());
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    v[a - 1].insert(i);
    v[b - 1].insert(i);
  }
  Debug(v);
  vector<int> ans(m, -1);
  set<int> found, second;
  int l = 0, r = 0;
  while (r < m) {
    while (r < m && found.size() < n) {
      for(auto x: v[r] ){
        if(!found.count(x)){
          found.insert(x);
        }
        else{
          second.insert(x);
        }
      }
      r++;
    }
    while (found.size() == n && l < r) {
      ans[l] = r - 1;
      for (auto x : v[l]){
        if(second.count(x)) {
          second.erase(x);
        }
        else {
          found.erase(x);
        }
      }
      l++;
    }
  }
  Debug(ans);
  vector<int> imos(m + 1, 0);
  rep(i, m) {
    if (ans[i] == -1) continue;
    imos[ans[i] - i]++;
    imos[m - i]--;
  }
  Debug(imos);
  rep(i, m) imos[i + 1] += imos[i];
  Debug(imos);
  rep(i,m) cout << imos[i] << " ";
  cout << endl;
  return 0;
}