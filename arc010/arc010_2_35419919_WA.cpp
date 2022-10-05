/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc010/submissions/35419919
 * Submitted at: 2022-10-06 00:03:59
 * Problem URL: https://atcoder.jp/contests/arc010/tasks/arc010_2
 * Result: WA
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
#ifdef LOCAL
  #include "settings/debug.cpp"
  #define _GLIBCXX_DEBUG
#else
  #define Debug(...) 0
#endif
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)

struct Day {
  int month, day;
  int d;
  bool isRest;
  Day(int month, int day): month(month), day(day) {}
  bool operator<(const Day& other) const {
    return (month != other.month) ? (month < other.month) : (day < other.day);
  }
};

int main() {
  vector<Day> days;
  int c = 0;
  for (int i = 1; i <= 12; i++) {
    for (int j = 1; j <= 31; j++) {
      if (i == 2 && j >= 30) continue;
      if (i == 4 && j >= 31) continue;
      if (i == 6 && j >= 31) continue;
      if (i == 9 && j >= 31) continue;
      if (i == 11 && j >= 31) continue;
      days.push_back(Day(i, j));
      days.back().d = (c % 7);
      days.back().isRest = (days.back().d == 0 || days.back().d == 6);
      c++;
    }
  }

  int n;
  cin >> n;
  rep(i, n) {
    int m, d;
    scanf("%d/%d", &m, &d);
    bool f1 = false, f2 = false;
    for (auto& day : days) {
      if (day.month == m && day.day == d) {
        f1 = true;
        if (!day.isRest) {
          f2 = true;
          day.isRest = true;
          break;
        }
      }
      else if (f1 && !f2) {
        if (!day.isRest) {
          f2 = true;
          day.isRest = true;
          break;
        }
      }
    }
  }

  int ans = 0, streak = 0;
  for (auto& day : days) {
    if (day.isRest) {
      streak++;
    }
    else {
      ans = max(ans, streak);
      streak = 0;
    }
  }
  cout << ans << endl;
  return 0;
}