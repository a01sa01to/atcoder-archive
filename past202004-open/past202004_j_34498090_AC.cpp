/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/past202004-open/submissions/34498090
 * Submitted at: 2022-09-01 23:50:48
 * Problem URL: https://atcoder.jp/contests/past202004-open/tasks/past202004_j
 * Result: AC
 * Execution Time: 6 ms
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

struct Parser {
  private:
  using State = string::const_iterator;
  State s;
  string data;
  string rev() {
    string res = "";
    while (*s != ')' && s != data.end()) {
      Debug(*s);
      if (*s == '(') {
        s++;
        res += rev();
        s++;
        Debug(res, "rev");
        continue;
      }
      res += *s;
      s++;
    }
    string resrev = res;
    reverse(resrev.begin(), resrev.end());
    Debug(res + resrev);
    return res + resrev;
  }

  public:
  Parser(string& _s) {
    data = _s;
    s = data.begin();
  }
  string parse() {
    string res = "";
    while (s != data.end()) {
      Debug(*s);
      if (*s == '(') {
        s++;
        res += rev();
        s++;
        Debug(res);
      }
      else {
        res += *s;
        s++;
        Debug(res);
      }
    }
    return res;
  }
};

int main() {
  string s;
  cin >> s;
  Parser p(s);
  cout << p.parse() << endl;
  return 0;
}