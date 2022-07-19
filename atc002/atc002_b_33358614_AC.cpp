/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/atc002/submissions/33358614
 * Submitted at: 2022-07-19 17:10:23
 * Problem URL: https://atcoder.jp/contests/atc002/tasks/atc002_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

struct modint {
  // 値
  int value;
  // modの法
  int base;

  // コンストラクタ
  modint(int v, int b) {
    value = v % b;
    base = b;
  }

  // +演算子
  modint operator+(int right) {
    // とりあえず自分自身をコピーする
    modint res = (*this);
    // int型同士なので、+=演算子が使える
    res.value += right;
    // もしbase以上なら、baseを引いていく
    while (res.value >= base) res.value -= base;
    // もし負であれば、baseを足していく
    while (res.value < 0) res.value += base;
    // 返す
    return res;
  }
  modint operator+(modint right) {
    // 上で定義したので、 modint + int なら使える
    return (*this) + right.value;
  }
  // -演算子
  modint operator-(int right) {
    // 上で+を実装したのに加え、int型では-が定義されている
    // modint - int は、modint + (その数のマイナス) として実装する
    return (*this) + (-right);
  }
  modint operator-(modint right) {
    // 上で定義したので、 modint - int なら使える
    return (*this) - right.value;
  }
  // *演算子
  modint operator*(int right) {
    // とりあえずコピー
    modint res = (*this);
    // オーバーフローしないよう、long longにキャストして掛け、余りを求める
    res.value = ((long long) res.value * right) % base;
    // もし負であれば、baseを足す
    // modを上でとっているので、1回だけ行えばよい
    if (res.value < 0) res.value += base;
    return res;
  }
  modint operator*(modint right) {
    return (*this) * right.value;
  }
  // /演算子
  modint operator/(int right) {
    // 被除算項 * 序数の逆元 として実装する
    return (*this) * modint(right, base).inv();
  }
  modint operator/(modint right) {
    return (*this) / right.value;
  }
  // 累乗
  modint pow(long long r) {
    // r == 0 なら、 1 を返す
    if (r == 0) {
      return modint(1, base);
    }
    // rが奇数
    else if (r % 2 == 1) {
      return (*this) * pow(r - 1);
    }
    // rがそれ以外 = 偶数
    else {
      // 同じ値を2回求めるわけにはいかない
      // つまり、pow() * pow() としないようにするため、
      // とりあえずメモしておく
      modint res = pow(r / 2);
      // これを2乗すると求まる
      return res * res;
    }
  }
  // 逆元
  int inv() {
    return pow(base - 2).value;
  }
};

int main() {
  int n, m;
  long long p;
  cin >> n >> m >> p;
  cout << modint(n, m).pow(p).value << endl;
}