/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc253/submissions/32983220
 * Submitted at: 2022-07-04 19:56:28
 * Problem URL: https://atcoder.jp/contests/abc253/tasks/abc253_c
 * Result: AC
 * Execution Time: 241 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int q;
  cin >> q;

  multiset<int> s;

  // q回繰り返す
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      // クエリ1
      int x;
      cin >> x;
      s.insert(x);
    }
    else if (t == 2) {
      // クエリ2
      int x, c;
      cin >> x >> c;
      // c(=残り回数)が0より大きく、かつsにxが存在する場合には削除
      while (c > 0 && s.find(x) != s.end()) {
        s.erase(s.find(x));
        // 残り回数を減らす
        c--;
      }
    }
    else {
      // クエリ3
      cout << *s.rbegin() - *s.begin() << endl;
    }
  }
  return 0;
}