/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/fuka5/submissions/35453635
 * Submitted at: 2022-10-08 00:58:03
 * Problem URL: https://atcoder.jp/contests/fuka5/tasks/fuka_credit
 * Result: AC
 * Execution Time: 21 ms
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n, k;
    cin >> n >> k;
    if (n + k == 0) break;
    vector<int> x(n);
    for(int i = 0; i < n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    cout << accumulate(x.begin(), x.begin() + k, 0) << endl;
  }
  return 0;
}