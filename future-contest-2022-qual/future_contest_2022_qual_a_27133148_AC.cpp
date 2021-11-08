/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/future-contest-2022-qual/submissions/27133148
 * Submitted at: 2021-11-08 19:30:09
 * Problem URL: https://atcoder.jp/contests/future-contest-2022-qual/tasks/future_contest_2022_qual_a
 * Result: AC
 * Execution Time: 69 ms
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
  ll task_est = 0;
  ll done = 1;
  ll1d estimate;
  ll1d at_least;
  ll startday = 0;
  ll id;
  ld score = 100;
  void calcScore(ll1d& task_level, ll deltaDay) {
    if (deltaDay != 0 && scores.size() >= 20) {
      scores.erase(scores.begin());
    }
    pair<ld, ll1d> scores_now;
    ll sc_cnt = k;
    rep(i, k) if (task_level[i] < at_least[i]) sc_cnt--;
    scores_now.first = 1 - ld(max(0LL, deltaDay - task_est)) * sc_cnt / (100 * k);
    scores_now.second = ll1d(k);
    rep(i, k) {
      if (deltaDay == 0) {
        at_least[i] = max(at_least[i], task_level[i]);
      }
      else if (task_level[i] < at_least[i]) {
        scores_now.second[i] = at_least[i];
      }
      else {
        scores_now.second[i] = at_least[i] + (task_level[i] - estimate[i]);
      }
    }
    if (deltaDay != 0) scores.push_back(scores_now);
    ld sum_est = 0;
    rep(j, k) {
      ld sum = 0;
      rep(i, scores.size()) {
        sum += ld(max(0LL, scores[i].second[j] - at_least[j])) * pow(0.98, scores.size() - i - 1) * scores[i].first;
      }
      estimate[j] = at_least[j] + sum / (scores.size() + 1);
      sum_est += pow(estimate[j], 2);
    }
    score = sqrt(ld(sum_est)) * sqrt(ld(k));
  }

  private:
  vector<pair<ld, ll1d>> scores;
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
    tasks[i].sum_level += sqrt(ld(d));
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
        ll pending_est = -1;
        rep(i, n) {
          if (!tasks[i].finished && tasks[i].need.empty()) {
            // pending_idx = i;
            // break;
            if (pending_idx == -1) {
              ll comp_est = 0;
              rep(l, k) {
                comp_est += max(0LL, people[j].estimate[l] - tasks[i].level[l]);
              }
              pending_idx = i;
              pending_est = comp_est;
            }
            else if (day >= 100 && pending_idx + 30 > i) {
              ll prev_est = 0, comp_est = 0;
              rep(l, k) {
                prev_est += max(0LL, people[j].estimate[l] - tasks[pending_idx].level[l]);
                comp_est += max(0LL, people[j].estimate[l] - tasks[i].level[l]);
              }
              ld prev_est_cp = prev_est - people[j].score * tasks[pending_idx].children.size();
              ld comp_est_cp = comp_est - people[j].score * tasks[i].children.size();
              if (prev_est_cp < 1) {
                comp_est_cp += 1 - prev_est_cp;
                prev_est_cp = 1;
              }
              if (comp_est_cp < 1) {
                prev_est_cp += 1 - comp_est_cp;
                comp_est_cp = 1;
              }
              if (tasks[i].sum_level / (comp_est_cp) > tasks[pending_idx].sum_level / prev_est_cp) {
                pending_idx = i;
                pending_est = comp_est;
              }
            }
          }
        }
        if (pending_idx != -1) {
          people[j].doing = true;
          people[j].task = tasks[pending_idx].id;
          people[j].startday = day;
          people[j].task_est = pending_est;
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
      people[idx].task_est = 0;
      people[idx].calcScore(tasks[taskNum].level, day - people[idx].startday);
      rep(i, n) {
        tasks[i].need.erase(taskNum);
      }
    }
    day++;
  }
  return 0;
}