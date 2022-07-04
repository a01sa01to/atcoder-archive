/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc211/submissions/32987378
 * Submitted at: 2022-07-04 23:49:38
 * Problem URL: https://atcoder.jp/contests/abc211/tasks/abc211_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  set<string> st;
  for (int i = 0; i < 4; i++) {
    string s;
    cin >> s;
    st.insert(s);
  }
  cout << (st.size() == 4 ? "Yes" : "No") << endl;
}