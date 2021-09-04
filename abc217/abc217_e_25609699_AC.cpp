/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/25609699
 * Submitted at: 2021-09-04 22:48:08
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_e
 * Result: AC
 * Execution Time: 205 ms
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
  int q;
  cin >> q;
  queue<ll> que;
  priority_queue<ll, ll1d, greater<ll>> pq;
  rep(_, q) {
    int i;
    cin >> i;
    if (i == 1) {
      ll x;
      cin >> x;
      que.push(x);
    }
    else if (i == 2) {
      if (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
      }
      else {
        cout << que.front() << endl;
        que.pop();
      }
    }
    else {
      while (!que.empty()) {
        pq.push(que.front());
        que.pop();
      }
    }
  }
  return 0;
}