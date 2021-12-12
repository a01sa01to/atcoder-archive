/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc007/submissions/27880955
 * Submitted at: 2021-12-12 19:53:51
 * Problem URL: https://atcoder.jp/contests/ahc007/tasks/ahc007_a
 * Result: AC
 * Execution Time: 552 ms
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
#define rep(i, n) for (int i = 0; i < (n); ++i)

// chrono::system_clock::time_point start;
int n = 400, m = 1995;
vector<P> a(n);
vector<pair<P, P>> b(m);
vector<bool> use(m, false);

ll euclidDist(P a, P b) {
  return ll(round(sqrt(ld((a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second))) * 1.5));
}

void chk(ll x, ll idx) {
  b[idx].first.first = x;
  ll prev = 0;
  dsu d(n);
  rep(i, m) {
    if (use[i]) {
      d.merge(b[i].second.first, b[i].second.second);
      prev += b[i].first.first;
    }
  }
  ll nxt = 0;
  dsu t(n);
  vector<bool> tmp_use(m, false);
  sort(b.begin(), b.end());
  rep(i, m) {
    if ((b[i].first.second < idx && use[b[i].first.second]) || (b[i].first.second >= idx && !t.same(b[i].second.first, b[i].second.second))) {
      t.merge(b[i].second.first, b[i].second.second);
      tmp_use[b[i].first.second] = true;
      nxt += b[i].first.first;
    }
  }
  sort(b.begin(), b.end(), [](auto& a, auto& b) {
    return a.first.second < b.first.second;
  });
  if (nxt < prev && t.groups().size() == 1) use = tmp_use;
}

int main() {
  // start = chrono::system_clock::now();
  rep(i, n) cin >> a[i].first >> a[i].second;
  rep(i, m) {
    cin >> b[i].second.first >> b[i].second.second;
    b[i].first.first = euclidDist(a[b[i].second.first], a[b[i].second.second]);
    b[i].first.second = i;
  }
  sort(b.begin(), b.end());
  dsu d(n);
  rep(i, m) {
    if (!d.same(b[i].second.first, b[i].second.second)) {
      d.merge(b[i].second.first, b[i].second.second);
      use[b[i].first.second] = true;
    }
  }
  sort(b.begin(), b.end(), [](auto& a, auto& b) {
    return a.first.second < b.first.second;
  });
  // dsu t(n);
  rep(i, m) {
    ll x;
    cin >> x;
    chk(x, i);
    if (use[i]) {
      cout << 1 << endl;
      // t.merge(b[i].second.first, b[i].second.second);
    }
    else {
      cout << 0 << endl;
    }
    fflush(stdout);
  }
  return 0;
}