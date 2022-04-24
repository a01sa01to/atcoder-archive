/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc010/submissions/31233871
 * Submitted at: 2022-04-24 18:56:13
 * Problem URL: https://atcoder.jp/contests/ahc010/tasks/ahc010_a
 * Result: AC
 * Execution Time: 1941 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); ++i)
typedef vector<int> int_1d;
typedef vector<int_1d> int_2d;

constexpr int N = 30;
constexpr int SearchBreadth = 10;
int_2d Board(N, int_1d(N, 0));
const int_1d Rotate = { 1, 2, 3, 0, 5, 4, 7, 6 };
const int_2d to = {
  { 1, 0, -1, -1 },
  { 3, -1, -1, 0 },
  { -1, -1, 3, 2 },
  { -1, 2, 1, -1 },
  { 1, 0, 3, 2 },
  { 3, 2, 1, 0 },
  { 2, -1, 0, -1 },
  { -1, 3, -1, 1 },
};
const int_1d di = { 0, -1, 0, 1 };
const int_1d dj = { -1, 0, 1, 0 };

inline int random_int(int l, int r) {
  auto rd = random_device();
  auto mt = mt19937(rd());
  uniform_int_distribution<int> dist(l, r);
  return dist(mt);
}
inline double random_double(double l, double r) {
  auto rd = random_device();
  auto mt = mt19937(rd());
  uniform_real_distribution<double> dist(l, r);
  return dist(mt);
}

inline int_2d neighbor(int_2d now) {
  rep(_, 50) {
    int i = random_int(0, N - 1);
    int j = random_int(0, N - 1);
    int x = random_int(0, 3);
    now[i][j] = x;
  }
  return now;
}

inline ll calcState(const int_2d& res, bool init = false) {
  int_2d tiles(N, int_1d(N, 0));
  rep(i, N) rep(j, N) {
    tiles[i][j] = Board[i][j];
    rep(_, res[i][j]) tiles[i][j] = Rotate[tiles[i][j]];
  }
  int_1d list(0);
  vector used(N, vector<vector<bool>>(N, vector<bool>(4, false)));
  rep(i, N) rep(j, N) rep(d, 4) {
    if (to[tiles[i][j]][d] == -1) continue;
    if (used[i][j][d]) continue;
    int i2 = i, j2 = j, d2 = d, length = 0;
    while (!used[i2][j2][d2]) {
      if (to[tiles[i2][j2]][d2] == -1) break;
      length++;
      used[i2][j2][d2] = true;
      d2 = to[tiles[i2][j2]][d2];
      used[i2][j2][d2] = true;
      i2 += di[d2];
      j2 += dj[d2];
      if (i2 < 0 || i2 >= N || j2 < 0 || j2 >= N) break;
      d2 = (d2 + 2) % 4;
    }
    if (i == i2 && j == j2 && d == d2 && length) {
      list.push_back(length);
    }
    else if (init && length) {
      list.push_back(length);
    }
  }
  if (list.size() <= 1) return 0;
  sort(list.rbegin(), list.rend());
  return list[0] * list[1];
}

int main() {
  auto start = chrono::system_clock::now();

  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  rep(i, N) {
    string s;
    cin >> s;
    rep(j, N) Board[i][j] = s[j] - '0';
  }

  priority_queue<pair<ll, int_2d>> BSearch;
  {
    int_2d ans(N, int_1d(N, 0));
    ll bestScore = calcState(ans);
    BSearch.push({ bestScore, ans });
  }
  int cnt = 0;
  while (true) {
    auto now = chrono::system_clock::now();
    int elapsed = chrono::duration_cast<chrono::milliseconds>(now - start).count();
    if (elapsed > 1900) break;

    priority_queue<pair<ll, int_2d>> nxt;
    rep(_, SearchBreadth) {
      if (BSearch.empty()) break;
      auto now = BSearch.top();
      BSearch.pop();
      nxt.push(now);
      rep(_, SearchBreadth) {
        auto tmp = neighbor(now.second);
        nxt.push({ calcState(tmp), tmp });
      }
    }
    swap(BSearch, nxt);
    ++cnt;
  }

  auto ans = BSearch.top();
  rep(i, N) rep(j, N) cout << ans.second[i][j];
  cout << endl;
  Debug(ans.first, cnt);
  return 0;
}