/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/future-contest-2022-qual/submissions/27048113
 * Submitted at: 2021-11-06 11:31:45
 * Problem URL: https://atcoder.jp/contests/future-contest-2022-qual/tasks/future_contest_2022_qual_a
 * Result: AC
 * Execution Time: 80 ms
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

// n=1000, m=20, k=random(10~20), r=random(1000~3000)
ll n, m, k, r;

struct task {
  set<ll> need;
  set<ll> children;
  bool finished = false;
  ll1d level;
  ll max_level = 0;
  ld sum_level = 0;
  ll id;
};

struct person {
  bool doing = false;
  ll task = 0;
  ll done = 1;
  ll1d estimate;
  ll1d at_least;
  ll startday = 0;
  ll id;
  ld score = 100;
  void calcScore(ll1d& task_level, ll deltaDay) {
    if (deltaDay != 0 && scores.size() >= 10) {
      scores.erase(scores.begin());
    }
    ll1d scores_now(k);
    ll sc_cnt = k;
    rep(i, k) if (task_level[i] < at_least[i]) sc_cnt--;
    rep(i, k) {
      if (deltaDay == 0) {
        at_least[i] = max(at_least[i], task_level[i]);
      }
      else if (task_level[i] < at_least[i]) {
        scores_now[i] = 0;
      }
      else {
        scores_now[i] = (at_least[i] - task_level[i]) + ld(deltaDay) / sc_cnt;
      }
    }
    if (deltaDay != 0) scores.push_back(scores_now);
    ld sum_est = 0;
    rep(j, k) {
      ld sum = 0;
      rep(i, scores.size()) {
        sum += ld(scores[i][j]) * pow(0.95, scores.size() - i - 1);
      }
      estimate[j] = at_least[j] + sum / (scores.size() + 1) / 5.0;
      sum_est += pow(estimate[j], 2);
    }
    score = sqrt(ld(sum_est)) * sqrt(ld(k));
  }

  private:
  ll2d scores;
};

int main() {
  cin >> n >> m >> k >> r;

  // initialize
  vector<task> tasks(n);
  vector<person> people(m);
  rep(i, m) {
    people[i].estimate.assign(k, 0);
    people[i].at_least.assign(k, 0);
    people[i].id = i;
  }
  rep(i, n) {
    tasks[i].level.resize(k);
    tasks[i].id = i;
  }

  // input
  rep(i, n) rep(j, k) {
    ll d;
    cin >> d;
    tasks[i].level[j] = d;
    tasks[i].sum_level += pow(ld(d), 0.25);
    tasks[i].max_level = max(tasks[i].max_level, d);
  }
  rep(i, r) {
    ll u, v;
    cin >> u >> v;
    u--, v--;
    tasks[v].need.insert(u);
    tasks[u].children.insert(v);
  }

  // solve
  ll day = 1;
  while (true) {
    // output
    sort(all(people), [](person& a, person& b) {
      return a.score > b.score;
    });
    vector<P> list;
    rep(j, m) {
      if (!people[j].doing) {
        int pending_idx = -1;
        rep(i, n) {
          if (!tasks[i].finished && tasks[i].need.empty()) {
            // pending_idx = i;
            // break;
            if (pending_idx == -1) {
              pending_idx = i;
            }
            else if (day >= 150 && pending_idx + 50 > i) {
              ld prev_est = 1, comp_est = 1;
              rep(l, k) {
                prev_est += max(0LL, people[j].estimate[l] - tasks[pending_idx].level[l]);
                comp_est += max(0LL, people[j].estimate[l] - tasks[i].level[l]);
              }
              prev_est -= people[j].score * tasks[pending_idx].children.size();
              comp_est -= people[j].score * tasks[i].children.size();
              if (prev_est < 2) {
                comp_est += 2.01 - prev_est;
                prev_est = 2.01;
              }
              if (comp_est < 2) {
                prev_est += 2.01 - comp_est;
                comp_est = 2.01;
              }
              if (tasks[i].sum_level / sqrt(comp_est) > tasks[pending_idx].sum_level / sqrt(prev_est)) {
                pending_idx = i;
              }
            }
          }
        }
        if (pending_idx != -1) {
          people[j].doing = true;
          people[j].task = tasks[pending_idx].id;
          people[j].startday = day;
          tasks[pending_idx].finished = true;
          list.push_back({ people[j].id, tasks[pending_idx].id });
        }
      }
    }
    // printf("# [DEB] day-%lld list-size %ld\n", day, list.size());
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
      people[idx].calcScore(tasks[taskNum].level, day - people[idx].startday);
      rep(i, n) {
        tasks[i].need.erase(taskNum);
      }
    }
    day++;
  }
  return 0;
}