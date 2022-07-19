/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc002/submissions/33358247
 * Submitted at: 2022-07-19 16:50:37
 * Problem URL: https://atcoder.jp/contests/atc002/tasks/atc002_b
 * Result: AC
 * Execution Time: 8 ms
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
    value = v % m;
    mod = m;
  }
  modint operator+(int right) {
    modint res = *this;
    res.value += right;
    while (res.value >= mod) res.value -= mod;
    while (res.value < 0) res.value += mod;
    return res;
  }
  modint operator+(modint right) {
    return *this + right.value;
  }
  modint operator-(int right) {
    return *this + (-right);
  }
  modint operator-(modint right) {
    return *this - right.value;
  }
  modint operator*(int right) {
    modint res = *this;
    res.value = ((long long) res.value * right) % mod;
    if (res.value < 0) res.value += mod;
    return res;
  }
  modint operator*(modint right) {
    return *this * right.value;
  }
  modint operator/(int right) {
    return *this * modint(right, mod).inv();
  }
  modint operator/(modint right) {
    return *this / right.value;
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