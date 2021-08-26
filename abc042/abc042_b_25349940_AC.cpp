/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc042/submissions/25349940
 * Submitted at: 2021-08-26 21:56:28
 * Problem URL: https://atcoder.jp/contests/abc042/tasks/abc042_b
 * Result: AC
 * Execution Time: 6 ms
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
  int n, l;
  cin >> n >> l;
  priority_queue<string, vector<string>, greater<string>> pq;
  rep(i, n) {
    string s;
    cin >> s;
    pq.push(s);
  }
  while (!pq.empty()) {
    cout << pq.top();
    pq.pop();
  }
  cout << endl;
  return 0;
}