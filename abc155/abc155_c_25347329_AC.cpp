/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc155/submissions/25347329
 * Submitted at: 2021-08-26 19:17:27
 * Problem URL: https://atcoder.jp/contests/abc155/tasks/abc155_c
 * Result: AC
 * Execution Time: 711 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  priority_queue<string, vector<string>, greater<string>> pq;
  map<string, int> mp;
  int maxim = 0;
  rep(i, n) {
    string s;
    cin >> s;
    mp[s]++;
    if (mp[s] == 1) {
      pq.push(s);
    }
    maxim = max(maxim, mp[s]);
  }
  while (!pq.empty()) {
    string s = pq.top();
    pq.pop();
    if (mp[s] == maxim) {
      cout << s << endl;
    }
  }
  return 0;
}