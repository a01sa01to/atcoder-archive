/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dp/submissions/25886159
 * Submitted at: 2021-09-17 09:46:33
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_f
 * Result: TLE
 * Execution Time: 2281 ms
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

int main() {
  cout << fixed << setprecision(15);
  string s, t;
  cin >> s >> t;
  set<string> st;
  queue<string> que;
  st.insert(s);
  que.push(s);
  while (!que.empty()) {
    string str = que.front();
    que.pop();
    rep(i, str.size()) {
      string tmp = str;
      tmp.erase(i, 1);
      if (!st.count(tmp)) {
        st.insert(tmp);
        que.push(tmp);
      }
    }
  }
  queue<string> _;
  _.push(t);
  set<string> stt;
  stt.insert(t);
  while (!_.empty()) {
    string str = _.front();
    _.pop();
    rep(i, str.size()) {
      string tmp = str;
      tmp.erase(i, 1);
      if (!stt.count(tmp)) {
        stt.insert(tmp);
        _.push(tmp);
      }
    }
    if (st.count(str)) {
      cout << str << endl;
      return 0;
    }
  }
  return 0;
}