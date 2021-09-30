/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc033/submissions/26235831
 * Submitted at: 2021-09-30 14:33:20
 * Problem URL: https://atcoder.jp/contests/abc033/tasks/abc033_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  string s;
  cin>>s;
  cout<<(s[0]==s[1]&&s[2]==s[3]&&s[3]==s[0] ? "SAME" : "DIFFERENT") << endl;
  return 0;
}