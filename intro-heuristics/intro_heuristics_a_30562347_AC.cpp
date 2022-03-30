/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/intro-heuristics/submissions/30562347
 * Submitted at: 2022-03-30 12:23:13
 * Problem URL: https://atcoder.jp/contests/intro-heuristics/tasks/intro_heuristics_a
 * Result: AC
 * Execution Time: 1909 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

constexpr int day = 365;
constexpr int num_types = 26;
vector<int> c(num_types);
vector s(day, vector<int>(num_types, 0));

inline int rand_int(const int l, const int r) {
  random_device rnd;
  mt19937 mt(rnd());
  uniform_int_distribution<int> dist(l, r);
  return dist(mt);
}

inline double rand_double(const double l, const double r) {
  random_device rnd;
  mt19937 mt(rnd());
  uniform_real_distribution<double> dist(l, r);
  return dist(mt);
}

inline vector<int> neighbor(vector<int> t) {
  int i = rand_int(0, day - 1);
  int j = rand_int(1, num_types);
  t[i] = j;
  return t;
}

inline int score(const vector<int>& t) {  //10^4
  int ret = 0;
  vector<int> last(num_types, 0);
  rep(i, day) {
    ret += s[i][t[i] - 1];
    last[t[i] - 1] = i + 1;
    rep(j, num_types) ret -= c[j] * (i - last[j] + 1);
    // cout << ret << endl;
  }
  return ret;
}

inline double prob(const int best, const int score_tmp, const int time) {
  return exp((double) (score_tmp - best) / (time / 1900));
}

int main() {
  auto start = chrono::system_clock::now();
  cin.tie(nullptr);
  ios::sync_with_stdio(false);

  int _;
  cin >> _;
  rep(i, num_types) cin >> c[i];
  rep(i, day) rep(j, num_types) cin >> s[i][j];
  vector<int> tasks(day, 1);
  rep(i, day) {
    vector<int> last(num_types, 0);
    for (int j = 0; j < i; ++j) last[tasks[j] - 1] = j + 1;
    pair<int, int> nowbest(-1e9, 0);
    rep(j, num_types) {
      int tmp = 0;
      tmp += s[i][j];
      rep(k, num_types) if (k != j) tmp -= c[k] * (i - last[k] + 1);
      if (tmp > nowbest.first) {
        nowbest.first = tmp;
        nowbest.second = j;
      }
    }
    tasks[i] = nowbest.second + 1;
  }

  int best = score(tasks);
  int cnt = 0, ch = 0;

  while (true) {
    auto now = chrono::system_clock::now();
    auto time = chrono::duration_cast<chrono::milliseconds>(now - start).count();
    if (time > 1900) break;

    vector<int> tmp = neighbor(tasks);
    int score_tmp = score(tmp);
    if (best < score_tmp || rand_double(0, 1) <= prob(best, score_tmp, time)) {
      best = score_tmp;
      swap(tasks, tmp);
      ++ch;
    }
    ++cnt;
  }
  // cout << cnt << " " << ch << endl;
  for (int x : tasks) cout << x << endl;
  return 0;
}