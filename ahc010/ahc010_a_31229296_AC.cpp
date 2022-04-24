/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc010/submissions/31229296
 * Submitted at: 2022-04-24 17:06:22
 * Problem URL: https://atcoder.jp/contests/ahc010/tasks/ahc010_a
 * Result: AC
 * Execution Time: 1923 ms
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
const int_2d Change = {
  { 0, 1, 2, 3 },
  { 1, 2, 3, 0 },
  { 2, 3, 0, 1 },
  { 3, 0, 1, 2 },
  { 4, 5, 4, 5 },
  { 5, 4, 5, 4 },
  { 6, 7, 6, 7 },
  { 7, 6, 7, 6 }
};
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

int random_int(int l, int r) {
  auto rd = random_device();
  auto mt = mt19937(rd());
  uniform_int_distribution<int> dist(l, r);
  return dist(mt);
}
double random_double(double l, double r) {
  auto rd = random_device();
  auto mt = mt19937(rd());
  uniform_real_distribution<double> dist(l, r);
  return dist(mt);
}

int_2d neighbor(int_2d now) {
  rep(_, 10) {
    int i = random_int(0, N - 1);
    int j = random_int(0, N - 1);
    int x = random_int(0, 3);
    now[i][j] = x;
  }
  // rep(i, N) rep(j, N) cout << now[i][j];
  // cout << endl;
  return now;
}

ll calcState(const int_2d& res) {
  priority_queue<ll> pq;
  vector Checked(N, vector<bool>(N, false));
  rep(_i, N) rep(_j, N) {
    if (Checked[_i][_j]) continue;
    int cnt = 0;
    rep(_d, 4) {
      int i = _i, j = _j, d = _d;
      int score = 0;
      while (true) {
        Checked[i][j] = true;
        int next_d = to[Change[Board[i][j]][res[i][j]]][d];
        if (next_d == -1) {
          score = 0;
          break;
        }
        i += di[next_d];
        j += dj[next_d];
        if (i < 0 || i >= N || j < 0 || j >= N) {
          score = 0;
          break;
        }
        d = (next_d + 2) % 4;
        ++score;
        if (i == _i && j == _j) break;
      }
      cnt = max(cnt, score);
    }
    if (cnt) pq.push(cnt);
  }
  ll ans = 0;
  if (pq.size() <= 1) return 0;
  // Debug(pq.top());
  ans = pq.top(), pq.pop();
  // Debug(pq.top());
  ans *= pq.top();
  return ans;
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