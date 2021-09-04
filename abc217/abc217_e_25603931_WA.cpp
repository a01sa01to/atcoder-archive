/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc217/submissions/25603931
 * Submitted at: 2021-09-04 22:28:47
 * Problem URL: https://atcoder.jp/contests/abc217/tasks/abc217_e
 * Result: WA
 * Execution Time: 2206 ms
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
  ll prev = -1;
  priority_queue<ll, ll1d, greater<ll>> pq, al;
  queue<ll> que;
  rep(_, q) {
    int i;
    cin >> i;
    if (i == 1) {
      ll x;
      cin >> x;
      que.push(x);
      al.push(x);
    }
    else if (i == 2) {
      if (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
        al.pop();
      }
      else {
        cout << que.front() << endl;
        que.pop();
      }
    }
    else {
      const priority_queue<ll, ll1d, greater<ll>> p = al;
      pq = p;
      queue<ll> emp;
      swap(que, emp);
    }
  }
  return 0;
}