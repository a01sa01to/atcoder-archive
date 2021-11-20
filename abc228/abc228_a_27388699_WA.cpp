/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc228/submissions/27388699
 * Submitted at: 2021-11-20 22:11:54
 * Problem URL: https://atcoder.jp/contests/abc228/tasks/abc228_a
 * Result: WA
 * Execution Time: 5 ms
 */

// Takahashi turns on the light of his room at S o'clock (on the 24-hour clock) every day and turns it off at T o'clock everyday.
// The date may change while the light is on.
// Determine whether the light is on at 30 minutes past X o'clock.
// Input
// Input is given from standard input in the following format: S T X
// S and T are integers between 0 and 23, inclusive.
// X is an integer between 0 and 23, inclusive.
// Output
// If the light is on at 30 minutes past X o'clock, print "Yes" (without quotes); otherwise, print "No".
// Sample Input 1
// 7 20 12
// Sample Output 1
// Yes
// Sample Input 2
// 20 7 12
// Sample Output 2
// No
// Sample Input 3
// 23 0 23
// Sample Output 3
// Yes

#include <bits/stdc++.h>
using namespace std;
int main() {
  int s, t, x;
  cin >> s >> t >> x;
  if (s > t) t += 24;
  if (x > t) x += 24;
  if (s <= x && x < t) cout << "Yes" << endl;
  else
    cout << "No" << endl;
}