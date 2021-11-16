/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc118/submissions/27283517
 * Submitted at: 2021-11-16 10:05:22
 * Problem URL: https://atcoder.jp/contests/arc118/tasks/arc118_a
 * Result: AC
 * Execution Time: 9 ms
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
#define rep(i, n) for (ll i = 0; i < n; i++)

int main() {
  ll t, n;
  cin >> t >> n;
  set<ll> found;
  vector<ll> notFound;
  for (int i = 1; i <= 100; i++) found.insert((100 + t) * i / 100);
  for (int i = 1; i <= 100 + t; i++)
    if (!found.count(i)) notFound.push_back(i);
  int m = notFound.size();
  n--;
  cout << notFound[n % m] + (100 + t) * (n / m) << endl;
  return 0;
}