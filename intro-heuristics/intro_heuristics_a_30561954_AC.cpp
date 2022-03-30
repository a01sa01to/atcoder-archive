/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/intro-heuristics/submissions/30561954
 * Submitted at: 2022-03-30 11:50:08
 * Problem URL: https://atcoder.jp/contests/intro-heuristics/tasks/intro_heuristics_a
 * Result: AC
 * Execution Time: 1908 ms
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
    ret += s[i][t[i]];
    last[t[i] - 1] = i + 1;
    rep(j, num_types) ret -= c[j] * (i - last[j] + 1);
    // cout << ret << endl;
  }
  return ret;
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
    tasks[i] = rand_int(1, num_types);
  }

  int best = score(tasks);
  int cnt = 0, ch = 0;

  while (true) {
    auto now = chrono::system_clock::now();
    if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 1900) break;

    vector<int> tmp = neighbor(tasks);
    int score_tmp = score(tmp);
    if (best < score_tmp) {
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