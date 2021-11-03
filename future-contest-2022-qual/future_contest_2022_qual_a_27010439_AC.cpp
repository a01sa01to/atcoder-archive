/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/future-contest-2022-qual/submissions/27010439
 * Submitted at: 2021-11-03 23:23:02
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

struct task {
  set<ll> deps;
  bool finished = false;
  fenwick_tree<ll> level;
  ll max_level = 0;
  ll id;
};

struct person {
  bool doing = false;
  ll task = 0;
  ll done = 1;
  fenwick_tree<ll> estimate;
  ll startday = 0;
};

int main() {
  // n=1000, m=20, k=random(10~20), r=random(1000~3000)
  ll n, m, k, r;
  cin >> n >> m >> k >> r;
  vector<task> tasks(n);
  vector<person> people(m);
  rep(i, m) {
    people[i].estimate = fenwick_tree<ll>(n);
  }

  // input
  rep(i, n) {
    tasks[i].level = fenwick_tree<ll>(k);
    tasks[i].id = i;
    rep(j, k) {
      ll d;
      cin >> d;
      tasks[i].level.add(j, d);
      tasks[i].max_level = max(tasks[i].max_level, d);
    }
  }
  rep(i, r) {
    ll u, v;
    cin >> u >> v;
    u--, v--;
    tasks[v].deps.insert(u);
  }

  bool sorted = false;
  ll day = 1;
  while (true) {
    // output
    vector<P> list;
    rep(i, n) {
      // if (!tasks[i].finished) {
      //   printf("# [DEB] depend day-%lld taskid-%lld\n", day, i);
      // }
      if (!tasks[i].finished && tasks[i].deps.empty()) {
        // printf("# [DEB] day-%lld taskid-%lld\n", day, i);
        rep(j, m) {
          if (!people[j].doing) {
            people[j].doing = true;
            people[j].task = i;
            people[j].startday = day;
            tasks[i].finished = true;
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

    // interactive input
    int t;
    cin >> t;
    if (t == -1) break;
    rep(_, t) {
      int a;
      cin >> a;
      a--;
      people[a].doing = false;
      ll taskNum = people[a].task;
      people[a].task = 0;
      // people[a].estimate.add(people[a].done++, tasks[taskNum].level.sum(0, k) / (day - people[a].startday));
      rep(i, n) {
        tasks[i].deps.erase(taskNum);
      }
    }

    // if (!sorted) {
    //   sort(all(tasks), [&](task& a, task& b) {
    //     return a.level.sum(0, k) < b.level.sum(0, k);
    //   });
    //   sorted = true;
    // }
    day++;
  }
  return 0;
}