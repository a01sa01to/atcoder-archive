/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc018/submissions/34895899
 * Submitted at: 2022-09-17 00:51:09
 * Problem URL: https://atcoder.jp/contests/agc018/tasks/agc018_a
 * Result: AC
 * Execution Time: 43 ms
 */

#include<bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int g = 0, m = 0;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    g = gcd(g, x);
    m = max(m, x);
  }
  cout << (k % g == 0 && k <= m ? "" : "IM") << "POSSIBLE" << endl;
}