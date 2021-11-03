/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/future-contest-2022-qual/submissions/27011083
 * Submitted at: 2021-11-03 23:54:37
 * Problem URL: https://atcoder.jp/contests/future-contest-2022-qual/tasks/future_contest_2022_qual_a
 * Result: AC
 * Execution Time: 54 ms
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
  set<ll> need;
  set<ll> children;
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
  ld score = 0;
  vector<ll> scores;
  ll id;
  void calcScore() {
    ld sum = 0;
    if (scores.size() == 0) return;
    rep(i, scores.size()) {
      sum += scores[i];
    }
    score = sum / scores.size();
  }
};

int main() {
  // n=1000, m=20, k=random(10~20), r=random(1000~3000)
  ll n, m, k, r;
  cin >> n >> m >> k >> r;
  vector<task> tasks(n);
  vector<person> people(m);
  rep(i, m) {
    people[i].estimate = fenwick_tree<ll>(n);
    people[i].id = i;
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
    tasks[v].need.insert(u);
    tasks[u].children.insert(v);
  }

  // sort(all(tasks), [](task& a, task& b) {
  //   return a.children.size() < b.children.size();
  // });

  ll day = 1;
  while (true) {
    // output
    sort(all(people), [](person& a, person& b) {
      return a.score > b.score;
    });
    vector<P> list;
    rep(j, m) {
      if (!people[j].doing) {
        rep(i, n) {
          if (!tasks[i].finished && tasks[i].need.empty()) {
            people[j].doing = true;
            people[j].task = tasks[i].id;
            people[j].startday = day;
            tasks[i].finished = true;
            list.push_back({ people[j].id, tasks[i].id });
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
      int idx;
      rep(i, m) {
        if (people[i].id == a) idx = i;
      }
      people[idx].doing = false;
      ll taskNum = people[idx].task;
      people[idx].task = 0;
      people[idx].scores.push_back(tasks[taskNum].max_level / (day - people[idx].startday + 1));
      people[idx].calcScore();
      rep(i, n) {
        tasks[i].need.erase(taskNum);
      }
    }
    day++;
  }
  return 0;
}