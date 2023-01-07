/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc284/submissions/37852437
 * Submitted at: 2023-01-07 23:04:05
 * Problem URL: https://atcoder.jp/contests/abc284/tasks/abc284_f
 * Result: AC
 * Execution Time: 120 ms
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
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct RollingHash {
  using ull = unsigned long long;

  public:
  static const ull Mod = (1LL << 61) - 1;
  ull base;
  RollingHash(const string &s, ull _base = 0) {
    if (_base == 0) {
      random_device rnd;
      mt19937 mt(rnd());
      uniform_int_distribution<ull> rand(128, INT_MAX);
      _base = rand(mt);
    }

    base = _base;
    powr.assign(1, 1);
    int n = s.size();
    hash.assign(n + 1, 0);
    for (int i = 0; i < n; ++i) {
      hash[i + 1] = mulMod(hash[i], base) + s[i];
      hash[i + 1] = getMod(hash[i + 1]);
    }
  }

  ull get(int l, int r) {
    ull res = hash[r] - mulMod(hash[l], getPow(r - l));
    return getMod(res + Positivizer);
  }

  ull getBase() {
    return base;
  }

  private:
  static const ull Positivizer = 7 * Mod;
  vector<ull> hash;
  vector<ull> powr;
  ull getPow(int n) {
    while (powr.size() <= n) {
      powr.push_back(mulMod(powr.back(), base));
    }
    return powr[n];
  }

  ull mulMod(ull x, ull y) {
    __int128_t t = (__int128_t) x * y;
    t = (t >> 61) + (t & Mod);
    if (t >= Mod) t -= Mod;
    return (ull) t;
  }
  ull getMod(ull val) {
    val = (val & Mod) + (val >> 61);
    if (val >= Mod) val -= Mod;
    return val;
  }
};

int main() {
  int n;
  cin >> n;
  string t;
  cin >> t;
  string s = t;
  RollingHash rh1(t);
  reverse(t.begin(), t.end());
  RollingHash rh2(t, rh1.getBase());
  rep(i, n) {
    Debug(s.substr(0, i), t.substr(n - i, i));
    Debug(rh1.get(0, i), rh2.get(n - i, n));
    Debug(s.substr(n + i), t.substr(n, n - i));
    Debug(rh1.get(n + i, 2 * n), rh2.get(n, 2 * n - i));
    Debug("----");
    if (rh1.get(0, i) == rh2.get(n - i, n) && rh1.get(n + i, 2 * n) == rh2.get(n, 2 * n - i)) {
      cout << t.substr(n - i, n) << endl;
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}