/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/32982895
 * Submitted at: 2022-07-04 19:31:08
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_bz
 * Result: AC
 * Execution Time: 69 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  // 入力
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // 個数を数える
  map<int, int> cnt;
  for (int i = 0; i < n; i++) {
    cnt[a[i]]++;
  }

  // 最大値を求める
  // 仮に、制約的にあり得ない値(-1)にしておく
  int maxValue = -1, maxCount = -1;
  // kにはa[i]、vにはその個数が入る
  for (auto [k, v] : cnt) {
    // 個数が多い場合には更新
    if (v > maxCount) {
      maxCount = v;
      maxValue = k;
    }
  }

  // 出力
  cout << maxValue << " " << maxCount << endl;
  return 0;
}