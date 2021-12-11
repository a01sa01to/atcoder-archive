/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc231/submissions/27817394
 * Submitted at: 2021-12-11 21:02:44
 * Problem URL: https://atcoder.jp/contests/abc231/tasks/abc231_b
 * Result: AC
 * Execution Time: 7 ms
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
  int n;
  cin >> n;
  map<string, int> mp;
  rep(i, n) {
    string s;
    cin >> s;
    ++mp[s];
  }
  cout << max_element(mp.begin(), mp.end(), [](auto& a, auto& b) {
            return a.second < b.second;
          })->first
       << endl;
  return 0;
}