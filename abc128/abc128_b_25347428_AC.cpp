/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc128/submissions/25347428
 * Submitted at: 2021-08-26 19:25:22
 * Problem URL: https://atcoder.jp/contests/abc128/tasks/abc128_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  priority_queue<string, vector<string>, greater<string>> pq;
  map<string, priority_queue<P>> mp;
  rep(i, n) {
    string s;
    int p;
    cin >> s >> p;
    mp[s].push({ p, i + 1 });
    if (mp[s].size() == 1) {
      pq.push(s);
    }
  }
  while (!pq.empty()) {
    string s = pq.top();
    pq.pop();
    priority_queue<P> pp = mp[s];
    while (!pp.empty()) {
      cout << pp.top().second << endl;
      pp.pop();
    }
  }
  return 0;
}