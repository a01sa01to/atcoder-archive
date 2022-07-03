/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc012/submissions/32954089
 * Submitted at: 2022-07-03 15:41:46
 * Problem URL: https://atcoder.jp/contests/ahc012/tasks/ahc012_a
 * Result: AC
 * Execution Time: 2828 ms
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
typedef vector<tuple<int, int, int, int>> T;

int n, k;
vector<int> a(10);
vector<pair<ll, ll>> straw;
vector<int> straw_id;
inline int rand_int(int a, int b);
inline tuple<int, int, int, int> gen() {
  int px = rand_int(-10000, 10000);
  int py = rand_int(-10000, 10000);
  int qx = rand_int(px + 1, 10000);
  int qy = rand_int(-10000, 10000);
  if (px == qx || py == qy) return gen();
  return { px, py, qx, qy };
}

struct State {
  ll score = 0;
  T now;
  bool operator<(const State& rhs) const { return score < rhs.score; }
  ll calcScore() {
    vector<vector<int>> pieces = { straw_id };
    for (auto [px, py, qx, qy] : now) {
      vector<vector<int>> new_pieces;
      for (auto piece : pieces) {
        vector<int> left, right;
        for (auto j : piece) {
          auto [x, y] = straw[j];
          ll side = (qx - px) * (y - py) - (qy - py) * (x - px);
          if (side > 0) left.push_back(j);
          if (side < 0) right.push_back(j);
        }
        if (left.size()) new_pieces.push_back(left);
        if (right.size()) new_pieces.push_back(right);
      }
      pieces = new_pieces;
    }
    vector<int> b(10, 0);
    for (auto piece : pieces) {
      if (piece.size() <= 10) ++b[piece.size() - 1];
    }
    ll num = 0, den = 0;
    rep(d, 10) {
      num += min(a[d], b[d]);
      den += a[d];
    }
    return score = round((1e6 * num / den));
  }
  State neighbor() {
    State ret;
    int cnt = rand_int(0, k);
    rep(_, cnt) ret.now.push_back(gen());
    ret.calcScore();
    return ret;
  }
};

inline int rand_int(int a, int b) {
  mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
  uniform_int_distribution<int> uid(a, b);
  return uid(rng);
}

inline double rand_double(double a, double b) {
  mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
  uniform_real_distribution<double> uid(a, b);
  return uid(rng);
}

inline double temp(chrono::nanoseconds t) {
  return chrono::duration_cast<chrono::milliseconds>(t).count() / 2500.0;
}

inline double prob(State& e, State& nexte, double t) {
  if (nexte.score > e.score) return 1.0;
  return exp((nexte.score - e.score) / t);
}

int main() {
  auto start = chrono::system_clock::now();

  Debug("start");
  cin >> n >> k;
  rep(i, 10) cin >> a[i];
  straw.resize(n);
  straw_id.resize(n);
  iota(straw_id.begin(), straw_id.end(), 0);
  rep(i, n) cin >> straw[i].first >> straw[i].second;
  Debug("input done");

  State best = { 0, {} };
  rep(_, k) best.now.push_back(gen());
  Debug("random done");
  best.calcScore();
  Debug("score done");
  State nows = best;
  int cnt = 0;
  while (true) {
    auto now = chrono::system_clock::now();
    if (chrono::duration_cast<chrono::milliseconds>(now - start).count() > 2800) {
      break;
    }
    ++cnt;
    State state = nows.neighbor();
    if (state.calcScore() > best.calcScore()) {
      swap(best, state);
    }
    else if (rand_double(0, 1) < prob(nows, state, temp(now - start))) {
      swap(best, state);
    }
  }
  Debug("search done");
  Debug(best.score);
  Debug(cnt);
  cout << best.now.size() << endl;
  for (auto [px, py, qx, qy] : best.now) {
    cout << px << " " << py << " " << qx << " " << qy << endl;
  }
  return 0;
}