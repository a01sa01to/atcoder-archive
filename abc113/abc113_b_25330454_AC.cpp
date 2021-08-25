/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc113/submissions/25330454
 * Submitted at: 2021-08-25 19:33:59
 * Problem URL: https://atcoder.jp/contests/abc113/tasks/abc113_b
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
typedef pair<int, double> P;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  int t, a;
  cin >> t >> a;
  auto comp = [&](P& f, P& s) {
    return abs(f.second - a) > abs(s.second - a);
  };
  priority_queue<P, vector<P>, decltype(comp)> pq { comp };
  rep(i, n) {
    int h;
    cin >> h;
    pq.push({ i + 1, (t - h * 0.006) });
  }
  cout << pq.top().first << endl;
  return 0;
}