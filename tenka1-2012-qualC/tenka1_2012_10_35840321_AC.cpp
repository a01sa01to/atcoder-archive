/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualC/submissions/35840321
 * Submitted at: 2022-10-22 00:35:57
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualC/tasks/tenka1_2012_10
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
  vector<string> deck(string& s, int& i) {
    vector<string> res;
    while (i < s.size()) res.push_back(card(s, i));
    return res;
  }
  string card(string& s, int& i) {
    string res = { mark(s, i) };
    res += num(s, i);
    Debug(res);
    return res;
  }
  char mark(string& s, int& i) {
    Debug(i, s[i]);
    return s[i++];
  }
  string num(string& s, int& i) {
    string res;
    Debug(i);
    if (s[i] == '1') {
      res = "10";
      i += 2;
    }
    else {
      res = s[i++];
    }
    Debug(res);
    return res;
  }
};

int main() {
  constexpr int INF = 1e9;
  const string aaa = "SHDC";
  const string bbb = "1JQKA";

  string s;
  cin >> s;
  Parser p;
  int i = 0;
  vector<string> v = p.deck(s, i);
  Debug(v);

  pair<int, vector<string>> res = { INF, {} };
  for (char c : aaa) {
    int cnt = 0;
    vector<string> tmp;
    rep(i, v.size()) {
      bool flg = false;
      if (v[i][0] == c) {
        if (bbb.find(v[i][1]) != string::npos) {
          cnt++;
          flg = true;
          if (cnt == 5) {
            res = min(res, { i, tmp });
            break;
          }
        }
      }
      if (!flg) tmp.push_back(v[i]);
    }
  }
  Debug(res);
  if (res.second.size() == 0) cout << 0 << endl;
  else {
    for (auto s : res.second) cout << s;
    cout << endl;
  }
  return 0;
}