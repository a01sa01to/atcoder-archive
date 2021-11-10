/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/future-contest-2022-qual/submissions/27158092
 * Submitted at: 2021-11-10 10:01:46
 * Problem URL: https://atcoder.jp/contests/future-contest-2022-qual/tasks/future_contest_2022_qual_a
 * Result: AC
 * Execution Time: 94 ms
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
  ld norm = 0;
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
    if (deltaDay != 0 && scores.size() >= 50) {
      scores.erase(scores.begin());
    }
    pair<ld, ll1d> scores_now;
    ll sc_cnt = k;
    rep(i, k) if (task_level[i] < at_least[i]) sc_cnt--;
    scores_now.first = 1 - ld(max(0LL, deltaDay - task_est)) * sc_cnt / (100 * k);
    scores_now.second = ll1d(k);
    rep(i, k) {
      if (deltaDay <= 7) {
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
    printf("#s %lld", id + 1);
    rep(j, k) {
      ld sum = 0;
      rep(i, scores.size()) {
        sum += ld(max(0LL, scores[i].second[j] - at_least[j])) * pow(0.99, scores.size() - i - 1) * scores[i].first;
      }
      estimate[j] = at_least[j] + sum / (scores.size() + 1);
      sum_est += pow(estimate[j], 2);
      printf(" %lld", estimate[j]);
    }
    printf("\n");
    score = sqrt(ld(sum_est)) * sqrt(ld(k));
  }

  private:
  vector<pair<ld, ll1d>> scores;
};

ld random_double(ld minim, ld maxim) {
  random_device rnd;
  mt19937 mt { rnd() };
  uniform_real_distribution<ld> dist(minim, maxim);
  return dist(mt);
}

int main() {
  cin >> n >> m >> k >> r;

  // initialize
  vector<task> tasks(n);
  vector<person> people(m);
  // ll2d people_level = {
  //   { 0, 7, 28, 1, 11, 10, 9, 7, 4, 1, 6, 4, 2, 12, 9 },
  //   { 16, 1, 14, 9, 0, 5, 15, 6, 2, 0, 4, 6, 2, 4, 7 },
  //   { 3, 3, 3, 1, 5, 12, 25, 2, 7, 13, 4, 20, 12, 23, 6 },
  //   { 13, 11, 6, 3, 11, 27, 3, 9, 8, 5, 10, 4, 2, 2, 16 },
  //   { 6, 5, 2, 1, 6, 14, 2, 15, 14, 3, 20, 6, 5, 17, 0 },
  //   { 3, 13, 18, 26, 22, 14, 14, 0, 10, 0, 16, 10, 17, 5, 8 },
  //   { 18, 11, 8, 7, 7, 9, 15, 12, 28, 4, 4, 1, 0, 3, 8 },
  //   { 1, 1, 4, 5, 9, 2, 5, 12, 5, 2, 7, 3, 3, 3, 2 },
  //   { 6, 11, 0, 6, 5, 5, 8, 0, 18, 5, 8, 0, 7, 5, 5 },
  //   { 19, 19, 6, 16, 9, 20, 13, 5, 14, 16, 9, 16, 5, 2, 12 },
  //   { 8, 7, 4, 6, 14, 14, 3, 8, 3, 3, 27, 4, 6, 11, 10 },
  //   { 1, 1, 0, 7, 1, 11, 8, 7, 22, 5, 18, 7, 10, 12, 21 },
  //   { 12, 13, 1, 12, 13, 5, 25, 23, 22, 9, 23, 8, 3, 14, 21 },
  //   { 3, 2, 14, 6, 15, 9, 3, 1, 16, 6, 7, 1, 6, 1, 1 },
  //   { 1, 0, 7, 12, 1, 2, 0, 1, 2, 6, 4, 1, 14, 6, 16 },
  //   { 0, 9, 4, 4, 1, 6, 7, 5, 1, 8, 14, 5, 15, 1, 1 },
  //   { 2, 11, 9, 12, 11, 3, 4, 19, 5, 4, 9, 4, 18, 30, 27 },
  //   { 8, 5, 1, 3, 26, 24, 7, 5, 5, 5, 18, 7, 15, 6, 2 },
  //   { 5, 4, 1, 3, 3, 9, 0, 4, 1, 11, 4, 6, 10, 6, 6 },
  //   { 8, 14, 12, 4, 14, 2, 3, 7, 6, 23, 18, 8, 7, 2, 11 }
  // };
  rep(i, m) {
    people[i].estimate.assign(k, 10);
    // people[i].estimate = people_level[i];
    people[i].score = k * 10;
    // people[i].score = sqrt(accumulate(all(people[i].estimate), 0.0)) * sqrt(ld(k));
    people[i].at_least.assign(k, 0);
    people[i].id = i;
  }
  rep(i, n) {
    tasks[i].level.resize(k);
    tasks[i].id = i;
  }

  // input
  rep(i, n) {
    rep(j, k) {
      ll d;
      cin >> d;
      tasks[i].level[j] = d;
      tasks[i].norm += ld(d) * ld(d);
      tasks[i].max_level = max(tasks[i].max_level, d);
    }
    tasks[i].norm = sqrt(tasks[i].norm);
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
            else if (pending_idx + 50 > i) {
              ll prev_est = 0, comp_est = 0;
              rep(l, k) {
                prev_est += max(0LL, people[j].estimate[l] - tasks[pending_idx].level[l]);
                comp_est += max(0LL, people[j].estimate[l] - tasks[i].level[l]);
              }
              ld prev_est_cp = prev_est - (people[j].score + tasks[pending_idx].children.size()) * people[j].score / sqrt(ld(k)) + tasks[pending_idx].norm;
              ld comp_est_cp = comp_est - (people[j].score + tasks[i].children.size()) * people[j].score / sqrt(ld(k)) + tasks[i].norm;
              if (prev_est_cp < 1) {
                comp_est_cp += 1 - prev_est_cp;
                prev_est_cp = 1;
              }
              if (comp_est_cp < 1) {
                prev_est_cp += 1 - comp_est_cp;
                comp_est_cp = 1;
              }
              // if (tasks[i].norm / sqrt(comp_est_cp) > tasks[pending_idx].norm / sqrt(prev_est_cp)) {
              if (comp_est_cp < prev_est_cp) {
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