/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc091/submissions/25362337
 * Submitted at: 2021-08-27 17:49:26
 * Problem URL: https://atcoder.jp/contests/abc091/tasks/abc091_b
 * Result: AC
 * Execution Time: 10 ms
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
  int n, m;
  cin >> n;
  map<string, int> mp;
  vector<string> said;
  rep(i, n) {
    string s;
    cin >> s;
    said.push_back(s);
    mp[s]++;
  }
  cin >> m;
  rep(i, m) {
    string s;
    cin >> s;
    said.push_back(s);
    mp[s]--;
  }
  sort(all(said));
  auto it = unique(all(said));
  said.erase(it, said.end());
  int maxim = 0;
  rep(i, said.size()) {
    maxim = max(maxim, mp[said[i]]);
  }
  cout << maxim << endl;
  return 0;
}