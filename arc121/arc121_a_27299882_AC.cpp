/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc121/submissions/27299882
 * Submitted at: 2021-11-17 14:24:56
 * Problem URL: https://atcoder.jp/contests/arc121/tasks/arc121_a
 * Result: AC
 * Execution Time: 117 ms
 */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct P {
  ll x, y, idx;
  bool operator<(const P &p) const { return idx < p.idx; }
};
int main() {
  ll n;
  cin >> n;
  vector<P> v(n);
  for (ll i = 0; i < n; i++) {
    cin >> v[i].x >> v[i].y;
    v[i].idx = i;
  }
  sort(v.begin(), v.end(), [](P &a, P &b) {
    return a.x < b.x;
  });
  set<pair<P, P>> used;
  used.insert({ v[0], v[n - 1] });
  used.insert({ v[1], v[n - 1] });
  used.insert({ v[0], v[n - 2] });
  used.insert({ v[1], v[n - 2] });
  sort(v.begin(), v.end(), [](P &a, P &b) {
    return a.y < b.y;
  });
  used.insert({ v[0], v[n - 1] });
  used.insert({ v[1], v[n - 1] });
  used.insert({ v[0], v[n - 2] });
  used.insert({ v[1], v[n - 2] });
  vector<ll> ans;
  auto itr = used.begin();
  while (itr != used.end()) {
    pair<P, P> chk = *itr;
    ans.push_back(max(chk.second.x - chk.first.x, chk.second.y - chk.first.y));
    itr++;
  }
  sort(ans.begin(), ans.end(), greater<ll>());
  cout << ans[1] << endl;
}