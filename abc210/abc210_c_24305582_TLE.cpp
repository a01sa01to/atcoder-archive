/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc210/submissions/24305582
 * Submitted at: 2021-07-17 21:31:44
 * Problem URL: https://atcoder.jp/contests/abc210/tasks/abc210_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#define _GLIBCXX_DEBUG
#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

ll check(queue<ll> q) {
  set<ll> s;
  loop(i, q.size()) {
    ll tmp = q.front();
    q.pop();
    s.insert(tmp);
    q.push(tmp);
  }
  return s.size();
}

int main() {
  cout << fixed << setprecision(15);
  ll n, k;
  ll ans = 0;
  cin >> n >> k;
  ll1d c(n, 0);
  queue<ll> cont;
  loop(i, n) {
    cin >> c[i];
  }
  loop(i, n) {
    if (i >= k) {
      cont.pop();
    }
    cont.push(c[i]);
    ans = max(ans, check(cont));
  }
  cout << ans << endl;
  return 0;
}