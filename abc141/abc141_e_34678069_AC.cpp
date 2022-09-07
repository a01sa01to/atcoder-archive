/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc141/submissions/34678069
 * Submitted at: 2022-09-08 00:00:41
 * Problem URL: https://atcoder.jp/contests/abc141/tasks/abc141_e
 * Result: AC
 * Execution Time: 863 ms
 */

#include <bits/stdc++.h>
using namespace std;
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
    ull res = hash[r] - mulMod(hash[l], getPow(r - l)) + 4 * Mod;
    return getMod(res);
  }

  private:
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
  string s;
  cin >> s;
  RollingHash rh(s);
  int ok = 0, ng = n + 1;
  while (ng - ok > 1) {
    int len = (ok + ng) / 2;
    bool chk = false;
    for (int i = 0; i + len <= n; i++) {
      if (chk) break;
      for (int j = i + len; j + len <= n; j++) {
        if (chk) break;
        if (rh.get(i, i + len) == rh.get(j, j + len)) chk = true;
      }
    }
    (chk ? ok : ng) = len;
  }
  cout << ok << endl;
  return 0;
}