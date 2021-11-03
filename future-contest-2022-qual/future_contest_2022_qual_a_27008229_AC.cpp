/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/future-contest-2022-qual/submissions/27008229
 * Submitted at: 2021-11-03 21:31:26
 * Problem URL: https://atcoder.jp/contests/future-contest-2022-qual/tasks/future_contest_2022_qual_a
 * Result: AC
 * Execution Time: 48 ms
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
typedef long double ld;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
  // n=1000, m=20, k=random(10~20), r=random(1000~3000)
  ll n, m, k, r;
  cin >> n >> m >> k >> r;
  ll2d d(n, ll1d(k));
  rep(i, n) rep(j, k) cin >> d[i][j];

  // task[i] = 0->未完了 1->完了orタスク中 2->依存
  ll1d tasks(n, 0);

  // people[i].first = true->タスク中 false->暇
  // people[i].second = やってるタスク(if first=true)
  vector<P> people(m, { 0, 0 });

  // firstをやるにはsecondが終わってる必要がある
  map<ll, set<ll>> dep;
  rep(i, r) {
    ll u, v;
    cin >> u >> v;
    dep[--v].insert(--u);
    tasks[v] = 2;
  }
  while (true) {
    // 出力する
    vector<P> list;
    rep(i, n) {
      if (tasks[i] == 0) {
        rep(j, m) {
          if (!people[j].first) {
            people[j].first = 1;
            people[j].second = i;
            tasks[i] = 1;
            list.push_back({ j, i });
            break;
          }
        }
      }
    }
    printf("%ld", list.size());
    for (P x : list) printf(" %lld %lld", x.first + 1, x.second + 1);
    printf("\n");
    fflush(stdout);

    // 入力受け取り
    int t;
    cin >> t;
    if (t == -1) break;
    rep(_, t) {
      int a;
      cin >> a;
      people[a - 1].first = 0;
      ll taskNum = people[a - 1].second;
      people[a - 1].second = 0;
      for (ll x : dep[taskNum]) {
        dep[x].erase(taskNum);
        if (dep[x].empty()) {
          tasks[x] = 0;
        }
      }
    }
  }
  return 0;
}