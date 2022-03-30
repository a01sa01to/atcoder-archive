/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/intro-heuristics/submissions/30561845
 * Submitted at: 2022-03-30 11:41:36
 * Problem URL: https://atcoder.jp/contests/intro-heuristics/tasks/intro_heuristics_a
 * Result: AC
 * Execution Time: 1810 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

constexpr int day = 365;
constexpr int num_types = 26;
vector<int> c(num_types);
vector s(day, vector<int>(num_types, 0));

int rand_int(int l, int r) {
  random_device rnd;
  mt19937 mt(rnd());
  uniform_int_distribution<int> dist(l, r);
  return dist(mt);
}

vector<int> neighbor(vector<int> t) {
  int i = rand_int(0, day - 1);
  int j = rand_int(1, num_types);
  t[i] = j;
  return t;
}

int score(const vector<int>& t) {  //10^4
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
    tasks[i] = (max_element(s[i].begin(), s[i].end()) - s[i].begin()) + 1;
  }

  int best = score(tasks);

  while (true) {
    auto now = chrono::system_clock::now();
    if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 1800) break;

    vector<int> tmp = neighbor(tasks);
    int score_tmp = score(tmp);
    if (best < score_tmp) {
      best = score_tmp;
      swap(tasks, tmp);
    }
  }

  for (int x : tasks) cout << x << endl;
  return 0;
}