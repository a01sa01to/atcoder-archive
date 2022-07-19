/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc002/submissions/33357863
 * Submitted at: 2022-07-19 16:31:46
 * Problem URL: https://atcoder.jp/contests/atc002/tasks/atc002_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;

struct modint {
  int value;
  int mod;
  modint() {
    value = 0;
    mod = 1;
  }
  modint(int v) {
    value = v;
    mod = 1;
  }
  modint(int v, int m) {
    value = v;
    mod = m;
  }
  modint operator+(modint right) {
    modint res;
    res.value = (value + right.value) % mod;
    res.mod = mod;
    return res;
  }
  modint operator-(modint right) {
    modint res;
    res.value = (value - right.value + mod) % mod;
    res.mod = mod;
    return res;
  }
  modint operator*(modint right) {
    modint res;
    res.value = ((long long) value * right.value) % mod;
    res.mod = mod;
    return res;
  }
  modint operator/(modint right) {
    modint res;
    res.value = ((long long) value * right.inv()) % mod;
    res.mod = mod;
    return res;
  }
  modint pow(long long r) {
    if (r == 0) {
      return modint(1, mod);
    }
    else if (r % 2 == 1) {
      return modint(value, mod) * pow(r - 1);
    }
    else {
      modint res = pow(r / 2);
      return res * res;
    }
  }
  int inv() {
    return pow(mod - 2).value;
  }
};

int main() {
  long long n, m, p;
  cin >> n >> m >> p;
  cout << modint(n, m).pow(p).value << endl;
}